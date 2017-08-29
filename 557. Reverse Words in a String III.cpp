class Solution {
public:
	string reverseWords(string s)
	{
		vector<string> vec_before;

		string str_temporary1;
		for (string::iterator iter1 = s.begin(); iter1 != s.end(); ++iter1)
		{
			if (*iter1 == ' ')
			{
				vec_before.push_back(str_temporary1);
				str_temporary1 = "";
			}
			else if (iter1 == s.end() - 1)
			{
				str_temporary1.push_back(*iter1);
				vec_before.push_back(str_temporary1);
			}
			else
				str_temporary1.push_back(*iter1);
		}

		string str;
		for (vector<string>::iterator iter2 = vec_before.begin(); iter2 != vec_before.end(); ++iter2)
		{
			for (string::reverse_iterator iter3 = (*iter2).rbegin(); iter3 != (*iter2).rend(); ++iter3)
				str.push_back(*iter3);
			if (iter2 != vec_before.end() - 1)
				str.push_back(' ');
		}

		return str;
	}

};