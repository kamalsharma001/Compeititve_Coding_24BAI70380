class Solution {
public:
    int nthMagicalNumber(int n, int a, int b) {
        long A = a, B = b;
        long low = std::min(a, b);
        long high = (long)n * min(a, b);
        long mod = 1000000007;

        while (B > 0) {
            long temp = A;
            A = B;
            B = temp % B;
        }

        long lcm = (long)a * b / A;

        while (low < high) {
            long mid = low + (high - low) / 2;
            if ((mid / a) + (mid / b) - (mid / lcm) < n)
                low = mid + 1;
            else
                high = mid;
        }

        return (int)(low % mod);
    }
};
