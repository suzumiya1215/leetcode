//https://leetcode.com/problems/plus-one/description/
class Solution
{
public:
	vector<int> plusOne(vector<int>& digits)
	{
		/*int n = digits.size();
		for (int i = n - 1; i >= 0; --i)
		{
			if (digits[i] == 9)
			{
				digits[i] = 0;
			}
			else
			{
				digits[i]++;
				return digits;
			}
		}
		digits[0] = 1;
		digits.emplace_back(0);
		return digits;

*/














		for (vector<int>::reverse_iterator r_iter = digits.rbegin(); r_iter != digits.rend(); ++r_iter)
		{
			if (*r_iter == 9)
				*r_iter = 0;
			else
			{
				*r_iter += 1;
				return digits;
			}
		}
		*digits.begin() = 1;
		digits.emplace_back(0);
		return digits;


	}
};

//2018年3月14日07:07:24