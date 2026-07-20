class Solution {
public:
const long long mod= 1e9 + 7;
long long power(long long  num,long long n ){
           long long ans = 1;

        while (n > 0) {
            if (n % 2 == 1)
                ans = (ans * num) %mod;

            num = (num * num) % mod;
            n /= 2;
        }

        return ans;
}
 int countGoodNumbers(long long n) {
        long long even=(n+1)/2;
        long long  odd=n/2;
        return (power(5,even) *power(4,odd))% mod;
    }
};