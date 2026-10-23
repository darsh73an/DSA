class Solution {
public:
    bool isHappy(int n) {
      int slow = n, fast = n;

      do{
        slow = sumSquares(slow);
        fast = sumSquares(sumSquares(fast));
      }while(slow != fast);

      return slow == 1;
    }

    int sumSquares(int n) {
        int sum = 0;
        while (n > 0) {
            int digit = n % 10;
            sum += digit * digit;
            n /= 10;
        }
        return sum;
    }
};

// O(log n)
// O(1)