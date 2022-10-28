class Solution {
	public:
		int NthTerm(int n){
		    // Code  here
		     long long k=1,ans;

     for(int i=1;i<=n;i++)

     {

         ans=(k*i)%1000000007+1;

         k=ans%1000000007;

     }

     return ans%1000000007;
		}

};
