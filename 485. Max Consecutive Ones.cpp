//https://leetcode.com/problems/max-consecutive-ones/description/
class Solution
{
public:
	int findMaxConsecutiveOnes(vector<int>& nums)
	{
		int sum = 0;
		int max = 0;
		for (auto iter : nums)
		{
			sum = (sum + iter)*iter;
			if (max < sum)
				max=sum;
		}
		return max;
	}
};

//2018年3月13日17:49:55