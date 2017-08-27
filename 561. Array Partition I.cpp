class Solution {
public:
    
	int arrayPairSum1(vector<int>& nums)
	{
		sort(nums.begin(), nums.end());
		int sum = 0;
		for (vector<int>::iterator iter3 = nums.begin(); iter3 != nums.end(); ++++iter3)
			sum += *iter3;

		return sum;
	}
};