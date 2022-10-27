struct alphanumeric {
    string name;
    int count;
};
class Solution {
  public:
    //vector<alphanumeric> sortedStrings(int N, vector<string> A) {
        // code here
        vector<alphanumeric> sortedStrings(int N, vector<string> A) {
        map<string, int>mp;
        for(int i=0;i<N;i++){
            mp[A[i]]++;
        }
        vector<alphanumeric> ans;
        for(auto i=mp.begin();i!=mp.end();i++){
            alphanumeric x;
            x.name = i->first;
            x.count = i->second;
            ans.push_back(x);
        }
        return ans;
    }
};
