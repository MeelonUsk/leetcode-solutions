class Solution {
public:
    bool isPerfectSquare(int num) {
        long n{1};
        
        while (n * n < num) {
            n++;
        }
        
        return n * n == num;
    }
};
