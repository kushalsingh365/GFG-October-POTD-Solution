class Solution{
public:
      string maxSum(string w,char x[], int b[],int n){
          // code here 
          unordered_map<char,int> mp;
          
          for(int i=0;i<n;i++){
              mp[x[i]]=b[i];
          }
          vector<int> ans;
          int val=INT_MIN;
          int l=0;
          int sum=0;
          for(int r=0;r<w.length();r++){
              if(mp.find(w[r])==mp.end()){
                  sum+=w[r];
              }
              else{
                  sum+=mp[w[r]];
              }
              if(val<sum){
                val=sum;
                ans.clear();
                ans.push_back(l);
                ans.push_back(r);
              }
              while(l<=r && sum<0){
                  if(mp.find(w[l])==mp.end()){
                      sum-=w[l];
                  }
                  else{
                      sum-=mp[w[l]];
                  }
                  l++;
              }
          }
          int i=ans[0],j=ans[1];
          return w.substr(i,j-i+1);
      
      }
};
