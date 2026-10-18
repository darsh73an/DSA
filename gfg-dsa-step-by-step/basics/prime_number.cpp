class Solution {
  public:
    bool isPrime(int n) {
        if (n <= 1) return false;

        // Check only up to sqrt(n), since every composite number has a factor <= sqrt(n).
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) return false;
        }

        return true;
    }
};

// TC: O(sqrt(n))
// SC: O(1)