class Solution
 {
	public:

		vector<int> twoSum(vector<int>& nums, int target)
		{
			vector<int> vec1;
			vector<int> vec2;
	
			for (vector<int>::iterator iter1 = nums.begin(); iter1 != nums.end(); ++iter1)
			{
				int a = target - *iter1;
				vector<int>::iterator iter2 = find(nums.begin(), nums.end(), a);
				if (iter2 != nums.end() && iter2 != iter1)
				{
					vec1.push_back(distance(nums.begin(), iter1));
					vec1.push_back(distance(nums.begin(), iter2));
				}
			}
			
			vec2.push_back(vec1[0]);
			vec2.push_back(vec1[1]);
	
			return vec2;
		}
			
};