 vector<int> v;

 int x=0,y=0;

 for(int i=0;i<N;i++){

     int tempx=x,tempy=y;

     for(int j=0;j<=i;j++){

         v.push_back(A[tempy][tempx]);

         tempx--;

         tempy++;

     }

     x+=1;

 }

 x=N-1;y=1;

 for(int i=0;i<N-1;i++){

     int tempx=x,tempy=y;

     for(int j=0;j<N-i-1;j++){

         v.push_back(A[tempy][tempx]);

         tempx--;

         tempy++;

     }

     y+=1;

 }

 return v;
