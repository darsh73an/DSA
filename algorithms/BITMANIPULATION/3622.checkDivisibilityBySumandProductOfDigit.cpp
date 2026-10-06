class Solution {
public:
    bool checkDivisibility(int n) {
        int x = n;
        int sum = 0, product = 1;  // remember product must be initialized with 1

        while(x > 0){
            int lastDig = x % 10;
            sum += lastDig;
            product *= lastDig;
            x = x/10; // bcoz lastdig only finds lastdig but not removes the lastdig
        }
        return n % (sum + product) == 0; 
                //bcoz -> whether n is divisible by the sum of the following two values: sum , product
    }
};