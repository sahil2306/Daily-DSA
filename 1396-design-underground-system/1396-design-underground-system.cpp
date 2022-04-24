class UndergroundSystem {
public:
    unordered_map<int,pair<string,int>> checkinMap;
    unordered_map<string, pair<double, int>> stationsMap;
    
    UndergroundSystem() {}
    
    void checkIn(int id, string stationName, int t) {
        checkinMap[id]={stationName,t};
    }
    
    void checkOut(int id, string stationName, int t) {
        string station = checkinMap[id].first;
        int stime = checkinMap[id].second;
        
        checkinMap.erase(id);
        string routeName = station + "_" + stationName;
        
        stationsMap[routeName].first += t-stime;
        stationsMap[routeName].second += 1;
    
    }
    
    double getAverageTime(string startStation, string endStation) {
        string routeName = startStation + "_" + endStation;
        auto time = stationsMap[routeName];
        return (time.first/time.second);
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */