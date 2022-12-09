class Solution {
public:
    int integerReplacement(int n) { 
       if(n == 1) return 0;
        if(n == INT_MAX) return 32;
        int count = 0;
        while(n != 1) {
            if(n % 2 != 0 ) {
                int sub = n-1;
                if((sub/2) % 2 == 0 || (sub/2) == 1) n -= 1;
                else n+=1;
                count++;
            } else if(n % 2 == 0) {
                for(int i = 31; i >= 1; i--) {
                    if(n % (1 << i) == 0) {
                        n = n / (1 << i);
                        count += i;
                        break;
                    }
                }
                
            }
        }
        return count;
    }
};