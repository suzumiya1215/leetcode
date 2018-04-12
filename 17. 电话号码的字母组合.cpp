//https://leetcode-cn.com/problems/letter-combinations-of-a-phone-number/description/
class Solution
{
public:
	vector<string> letterCombinations(string digits)
	{

		vector<string> func_out;

		//stack<int> sta_num;
		//int n = stoi(digits);

		vector<string> te0;
		vector<string> te1;

		vector<string> te2 = { "a","b","c" };
		vector<string> te3 = { "d","e","f" };
		vector<string> te4 = { "g","h","i" };
		vector<string> te5 = { "j","k","l" };
		vector<string> te6 = { "m","n" ,"o" };
		vector<string> te7 = { "p","q","r","s" };
		vector<string> te8 = { "t","u","v" };
		vector<string> te9 = { "w","x","y","z" };
		vector < vector<string> > te_all = { te0 , te1 , te2 , te3 , te4 , te5 , te6 , te7 , te8 , te9 };

		if (digits == "")
			return func_out;
		else if (digits.size() == 1)
		{
			int tran_1 = digits.at(0) - '0';
			func_out = te_all.at(tran_1);
			return func_out;
		}
		else
		{
			//error
			vector<string> func_out_2;
			vector<string> func_out_4;

			int tran_frist = digits.at(0) - '0';
			func_out_2 = te_all.at(tran_frist);

			for (int i = 1; i != digits.size(); ++i)
			{
				int tran = digits.at(i) - '0';
				vector<string> func_out_3 = te_all.at(tran);
				for (int j = 0; j != func_out_2.size(); ++j)
				{
					
					for(int k=0;k!= func_out_3.size();++k)
					{ 
						string str_digits = func_out_2.at(j) + func_out_3.at(k);
						func_out_4.emplace_back(str_digits);
					}
				}
				func_out_2 = func_out_4;
				func_out_4.clear();
			}

			func_out = func_out_2;

			return func_out;
		}
	}
};