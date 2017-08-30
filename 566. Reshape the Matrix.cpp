class Solution {
public:
    //https://leetcode.com/problems/reshape-the-matrix/description/
	vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c)
	{
		if (nums[0].size()*nums.size() != r*c)
			return nums;
		else
		{
			vector<vector<int>> s1;
			vector<int> s2;

			for (int i = 0; i != nums.size(); ++i)
			{
				for (int j = 0; j != nums[0].size(); ++j)
					s2.push_back(nums[i][j]);
			}

			int k = 0;
			for (int i = 0; i != r; ++i)
			{
				vector<int> s3;
				for (int j = 0; j != c; ++j)
				{
					s3.push_back(s2[k]);
					++k;
				}
				s1.push_back(s3);
			}

			return s1;
		}
	}
};