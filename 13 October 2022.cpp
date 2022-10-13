
class Solution
{
   public:
    int findSum(int A[], int N)
    {
    	//code here.
    	 int max=0,min=0;

          for(int i=0;i<N;i++){

              if(A[i]>max)

                  max=A[i];

                //   System.out.println(max);

              if(A[i]<min)

                  min=A[i]; 

                // System.out.println(min);

              

          }

          int sum=min+max;

          return sum;
    }

};
