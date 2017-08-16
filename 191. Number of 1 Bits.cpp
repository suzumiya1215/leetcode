class Solution {
public:
    int hammingWeight(uint32_t n) {
        int hd = 0;
		while (n != 0)
		{
			if (n % 2 == 1)
				++hd;
			n /= 2;
		}
		return hd;
    }
};