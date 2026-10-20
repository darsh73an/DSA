class Solution {
  public:
    int largestPrimeFactor(int n) {
        // Largest prime factor = the largest number that:
        // 1. Divides n exactly.
        // 2. Is itself a prime number.
        
        int largest = 1; // for now 1 is largest prime facotr
        
        for(int i=2; i*i<=n; i++){
            while(n % i == 0){
                largest = i; // no need if state bcoz we are going ascending
                n /= i;
            }
        }
        if(n > 1) largest = n;
        
    return largest;
    }
};

// The loop exits when i * i > n, meaning no more possible factors need to be checked.
// If n > 1 after the loop, the remaining n is prime.

// O(sqrtof(n))
// O(1)