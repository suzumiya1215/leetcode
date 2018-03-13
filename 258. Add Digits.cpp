//https://leetcode.com/problems/add-digits/description/
class Solution
{
public:
	int addDigits(int num)
	{
		string str = to_string(num);
		while (str.size() != 1)
		{
			int n = 0;
			for (auto iter : str)
			{
				int m =iter-48;
				n += m;
			}
			str = to_string(n);

		}
		int n = atoi(str.c_str());
		return n;
	}
};

//2018年3月13日18:25:20