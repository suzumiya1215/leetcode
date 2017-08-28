class Solution {
public:
    int findComplement(int num)
	{
		vector<int> vec;
		int result = 0;
		while (num != 1)
		{
			if (num % 2 == 0)
				vec.push_back(1);
			else if (num % 2 == 1)
				vec.push_back(0);
			num /= 2;
		}
		for (int i = 0; i != vec.size(); ++i)
			result += vec[i] * pow(2, i);

		return result;
	}
};