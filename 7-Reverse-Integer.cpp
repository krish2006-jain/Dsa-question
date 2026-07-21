class Solution {
public:
    int reverse(int x) {
       int num=x;
       long long ress=0;
       while(num!=0){
        int rem=num%10;
        ress= ress*10+ rem;
        num/=10;
       } 
             if (ress > INT_MAX || ress < INT_MIN)
            return 0;
       return (int)ress;
    }
};