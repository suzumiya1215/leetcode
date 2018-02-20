//https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/description/
class Solution
{
public:
	vector<int> twoSum(vector<int>& numbers , int target)
	{
		vector<int> ret;

		for (int i = 1; i != numbers.size(); ++i)
		{
			if (numbers[0] + numbers[i] == target)
			{
				ret.emplace_back(1);
				ret.emplace_back(i + 1);
				return ret;
			}
		}

		for (int i = 1, k=0; i != numbers.size()-1; ++i)
		{
			if (numbers[k] == numbers[i])
				continue;
			for (int j = i + 1; j != numbers.size(); ++j)
			{
				if (numbers[i] + numbers[j] == target)
				{
					ret.emplace_back(i + 1);
					ret.emplace_back(j + 1);
					return ret;
				}
			}
			k = i;
		}
	}
};