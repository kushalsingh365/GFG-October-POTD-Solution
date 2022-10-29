class Solution{
public:
    vector<vector<string>> displayContacts(int n, string contact[], string s)
    {
        // code here
        unordered_map<string,set<string>> mp;
        for(int i=0;i<n;i++){
            string str="";
            for(int j=0;j<contact[i].size();j++){
                str=str+contact[i][j];
                mp[str].insert(contact[i]);
            }
        }
        vector<vector<string>> vec;
        string q="";
        for(auto x:s){
            q=q+x;
            if(mp.find(q)!=mp.end()){
                vector<string> v(mp[q].begin(),mp[q].end());
                vec.push_back(v);
            }
            else{
                vector<string> v(1,"0");
                vec.push_back(v);
            }
        }
        return vec;
    }
};
