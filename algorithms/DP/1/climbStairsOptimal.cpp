class Solution {
public:
    int climbStairs(int n) {
        //Optimal
        // 0(n) 0(1)

      if(n <= 2) return n;

      int prev1 = 2, prev2 = 1;

      for(int i=3; i<=n; i++){
        int curr = prev1 + prev2;
        prev2 = prev1;
        prev1 = curr;
      }
      return prev1;
    }
};

// if 1, 2 and 3 steps can be taken then


class Solution {
public:
    int climbStairs(int n) {
        //Optimal
        // 0(n) 0(1)

      if(n <= 2) return n == 0 ? 1 : n;

      int a = 1, b = 1, c = 2; // a b c curr  curr = a +  b + c

      for(int i=3; i<=n; i++){
        int curr = a + b + c;
        a = b; // assigning bcoz we will calc a+b+c again 
        b = c;
        c = curr;
      }
      return a;
    }
};