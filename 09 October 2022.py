from math import sqrt, ceil


class Solution:
    def isPrime(self, num):
        if num in (0, 1):
            return False
            
        if num == 2:
            return True
            
        for i in range(2, ceil(sqrt(num)) + 1):
            if num % i == 0:
                return False
        return True
        
	def NthTerm(self, N):
		if self.isPrime(N):
		    return 0
		
		for diff in range(1, N):
		    i, j = N - diff, N + diff
		    if self.isPrime(i) or self.isPrime(j):
		        return diff
        return N
