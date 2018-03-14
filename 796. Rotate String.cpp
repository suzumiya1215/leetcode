//https://leetcode.com/problems/rotate-string/description/

class Solution
{
public:
	bool rotateString(string A , string B)
	{
		//http://c.biancheng.net/cpp/biancheng/view/3024.html

		for (int i = 1; i != A.size(); ++i)
		{
			//A.substr()
			string::iterator iter_a = A.begin();
			A += *iter_a;
			A.erase(0 , 1);
			if (A.compare(B) == 0)
				return true;
		}
		return false;

	}
};

//2018年3月14日21:14:14