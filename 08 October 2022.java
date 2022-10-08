class Solution {
   static int countOfSubstrings(String S, int K) {
        
        int n = S.length();
        Map<Character, Integer> map = new HashMap<>();
        
        int i=0;
        for (;i < K; i++) {
            map.put(S.charAt(i), map.getOrDefault(S.charAt(i), 0) + 1);    
        }
        
        int count = 0;
        if (map.size() == K - 1) {
            count++;
        }
        
        for (; i < n; i++) {
            map.put(S.charAt(i), map.getOrDefault(S.charAt(i), 0) + 1);
            map.put(S.charAt(i - K), map.get(S.charAt(i - K)) - 1);
            
            if (map.get(S.charAt(i - K)) == 0) {
                map.remove(S.charAt(i - K));
            }
            
            if (map.size() == K - 1) {
                count++;
            }
        }
        
        return count;
    }
};
