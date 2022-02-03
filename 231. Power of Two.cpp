class Solution {
public:
    bool isPowerOfTwo(int n) {
        long long ans=1;
        while(ans<n)
            ans*=2;
        return ans==n;
    }
};
