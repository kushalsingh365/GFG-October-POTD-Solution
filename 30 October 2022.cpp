private:
long long sumq(deque<long long int> dq){
    long long int sum = 0;
    while(!dq.empty()){
        sum += dq.front();
        dq.pop_front();
    }
    return sum;
}
public:
	long long int NoOfChicks(int n){
	  deque<long long int> dq;
	  dq.push_back(1);
	  for(int i=2;i<=n;i++){
	      if(dq.size()==6){
	          dq.pop_front();
	      }
	      dq.push_back(sumq(dq)*2);
	  }
	  return sumq(dq);
	}
};
