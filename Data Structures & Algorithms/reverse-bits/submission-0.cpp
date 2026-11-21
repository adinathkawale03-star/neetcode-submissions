class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t a = 0;

        for (int i = 31; i >= 0; i--) {
            uint32_t a2 = n & (1U << (31-i));

            if (a2) {
                a = a | (1U << i);
            }
        }

        return a;
    }
};