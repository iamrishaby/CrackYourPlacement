class Solution {
public:
    int minBitFlips(int start, int goal) {
    int xor_result = start ^ goal;
    
    // Count the number of set bits (1s) in the XOR result
    int count = 0;
    while (xor_result > 0) {
        count += xor_result & 1;  // Add 1 if the least significant bit is 1
        xor_result >>= 1;         // Right shift the bits to check the next bit
    }
    return count;
    }
};