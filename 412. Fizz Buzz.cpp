﻿class Solution
 {
	public:
		
		vector<string> fizzBuzz(int n)
		{
			vector<string> vec;
	
			for (int i = 1; i != n + 1; ++i)
			{
				if (i % 3 ==0&& i % 5 == 0)
					vec.push_back("FizzBuzz");
				else if (i % 3 == 0)
					vec.push_back("Fizz");
				else if (i % 5 == 0)
					vec.push_back("Buzz");
				else
				{
					stringstream ss;
					string str;
					ss << i;
					ss >> str;
					vec.push_back(str);
				}
			}
	
			return vec;
		}

};