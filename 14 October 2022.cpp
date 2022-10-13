class Solution {
public:
    int minChar(string str){
        //Write your code here  
         int n=str.length();
        for(int i=n-1;i>=0;i--)
        {
            int end=i;
            int strt=0;
            while(strt<end)
            {
                if(str[strt]==str[end] && (end-strt==1))return n-1-i;
                if(str[strt]!=str[end])break;
                strt++;
                end--;
            }
            if(strt==end)return n-i-1;
        }
        return n-1;
    }
};
