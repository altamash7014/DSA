class Solution {
  public:
    static bool cmp(tuple<int,int,int>& a,tuple<int,int,int>& b){
        if(get<0>(a) == get<0>(b)){
            return get<2>(a) < get<2>(b);
        }
        return get<0>(a) <get<0>(b);
    }
    vector<int> maxMeetings(vector<int> &s, vector<int> &f) {
        // code here
        vector<tuple<int,int,int>> meetings;
        for(int i =0;i<s.size();i++){
            meetings.push_back({f[i], s[i], i + 1});
        }
        sort(meetings.begin(),meetings.end(),cmp);
        vector<int> ans;
        // int lastfinish = meetings[0].first;
        int lastfinish = get<0>(meetings[0]);
        // ans.push_back(meetings[0].third);
        ans.push_back(get<2>(meetings[0]));
        
        for(int i=1;i<s.size();i++){
            // if(meetings[i].second>lastfinish )
            if(get<1>(meetings[i]) > lastfinish){
                // ans.push_back(meetings[i].third+1);
                ans.push_back(get<2>(meetings[i]));
                lastfinish  = get<0>(meetings[i]);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
        
        
        
    }
};