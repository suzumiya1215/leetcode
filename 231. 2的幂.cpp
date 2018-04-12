//https://leetcode-cn.com/problems/power-of-two/description/
class Solution
{
public:
	bool isPowerOfTwo(int n)
	{
		for (long long i = 0; i != 9999999999; ++i)
		{
			if (n == pow(2 , i))
				return true;
			if (n < pow(2 , i))
				return false;
		}
	}
};