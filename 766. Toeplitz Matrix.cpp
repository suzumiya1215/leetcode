//https://leetcode.com/problems/toeplitz-matrix/description/
class Solution
{
public:
	bool isToeplitzMatrix(vector<vector<int> >& matrix)
	{
		for (int i = 1; i < matrix[0].size(); ++i)
		{
			for (int j = 1; j < matrix.size(); ++j)
			{
				if (matrix[j][i] != matrix[j - 1][i - 1])
					return false;
			}
		}
		return true;
	}
};