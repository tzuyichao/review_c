// 1342. Number of Steps to Reduce a Number to Zero
// https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/
int numberOfSteps(int num){
    int res = 0;
    
    while(num > 0) {
        if(num % 2 == 1) {
            --num;
        } else {
            num >>= 1;
        }
        ++res;
    }
    
    return res;
}