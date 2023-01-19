class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        while(n > 0) {
            cout << n << endl;
            if(n & 1) count++; // bitwise and
            n >>= 1; // n = n >> 1
        }
        
        return count;
    }
};