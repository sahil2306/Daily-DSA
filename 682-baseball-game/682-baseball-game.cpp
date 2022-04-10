class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> st;
        int ans=0;
        
        for(int i=0;i<ops.size();i++){
            string c = ops[i];
            
            if(c=="+"){
                int a = st.top();st.pop();
                int b = st.top();
                st.push(a);
                st.push(a+b);
            }
            else if(c=="D"){
                int a = st.top();
                a*=2;
                st.push(a);
            }
            else if(c=="C"){
                st.pop();
            }
            else{
                st.push(stoi(c));
            }
            
        }
        
        while(!st.empty()){
            ans+=st.top();st.pop();
            //cout<<a<<" ";
        }
        
        return ans;
    }
};