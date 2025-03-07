class Solution {
public:
   bool isprime(int n){
    if(n==2) return true;
    if(n<2 || n%2==0) return false;
    for(int i=3;i*i<=n;i+=2){
        if(n%i==0)
            return false;
    }
    return true;
 }
    vector<int> closestPrimes(int left, int right) {
        int prime1=-1, prime2=-1, prev_prime=-1, diff=INT_MAX;
        
        for(int i=left; i<=right; i++) {
            if(isprime(i)) {
                if(prev_prime == -1) {
                    prev_prime = i;
                } else {
                    if(i - prev_prime < diff) {
                        prime1 = prev_prime;
                        prime2 = i;
                        diff = prime2 - prime1;
                    }
                    prev_prime = i;
                }
            }
        }

        if(prime1 == -1 || prime2 == -1) {
            return {-1, -1};
        }
        return {prime1, prime2};
    }
};
