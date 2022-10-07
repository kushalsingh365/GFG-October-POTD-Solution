class Solution {
  public:
    string lexicographicallySmallest(string S, int k) {
        // code here
         int n = S.size();
        if((n&(n-1))==0){
            k/=2;
        }
        else{
            k*=2;
        }
        
        if(k >= S.size()){
            return "-1";
        }
        stack<char>st;
        int cnt=0;
 
        for(int i=0 ; i < S.size() ; i++){
            char ch = S[i];
            while(!st.empty() and cnt < k and st.top() > ch){
                cnt++;
                st.pop();
            }
            
            st.push(ch);
        }
        
        
        while(st.size() != n-k){
            st.pop();
        }
        
      
        string ans="";
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        
        reverse(ans.begin() , ans.end());
        
        return ans;
    }
};
//
