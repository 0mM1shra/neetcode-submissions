class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n=position.size();
        vector<pair<int,float>>v(n);
        for(int i=0;i<n;i++){
            v[i].first=position[i];
            v[i].second=speed[i];
        }
        sort(v.begin(),v.end(),greater<pair<int,float>>());
        stack<float>st;
        st.push((target-v[0].first)/v[0].second);
        for(int i=1;i<n;i++){
            float t=(target-v[i].first)/v[i].second;
            if(t>st.top())st.push(t);
        }
        return st.size();
    }
};
