//https://leetcode-cn.com/problems/search-insert-position/description/
class Solution
{
public:
	int searchInsert(vector<int>& nums , int target)
	{
		if (nums.size() == 0)
			return 0;
		else if (nums.size() == 1)
		{
			if (nums.at(0) == target)
				return 0;
			if (nums.at(0) > target)
				return 0;
			else if (nums.at(0) < target)
				return 1;
		}
		else
		{
			for (int i = 0; i != nums.size(); ++i)
			{
				if (nums.at(i) == target)
					return i;
				else if (i == 0 && nums.at(0) > target)
					return 0;
				else if (i == nums.size() - 1 && nums.at(nums.size() - 1) < target)
					return nums.size();
				else if (target < nums.at(i + 1) && target > nums.at(i))
					return i + 1;
			}
		}
	}
};
//2018年4月15日22:44:22