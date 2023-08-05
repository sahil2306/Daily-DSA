class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> ans;
        stack<int> st;

        for(int i:asteroids){
            if(i<0){
                int flag=0;
                while(!st.empty()){
                    int j = st.top();
                    if(j<0){
                        break;
                    }
                    st.pop();

                    if(j>abs(i)){
                        st.push(j);
                        flag=1;
                        break;
                    }
                    else if(j==abs(i)){
                        flag=1;
                        break;
                    }
                }
                if(flag==0){
                    st.push(i);
                }
            }
            else{
                st.push(i);
            }
        }
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};