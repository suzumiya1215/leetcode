class Solution {
public:
    string reverseString(string s)
	{
		string str;
		for (string::reverse_iterator riter = s.rbegin(); riter != s.rend(); ++riter)
			str.push_back(*riter);
		return str;
	}
};