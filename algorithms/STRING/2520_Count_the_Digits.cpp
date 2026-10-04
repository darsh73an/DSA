class Solution {
public:
    int countDigits(int num) {
        int original = num;
        int count = 0;

        while(num > 0){
            int last = num%10;
            if(last !=0 && original % last == 0){
                count++;
            }
            num /= 10;
        }
        return count;
    }
};

// 0(log n)
// 0(1)