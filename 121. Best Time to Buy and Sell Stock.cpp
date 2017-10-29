class Solution
 {
	public:

		int maxProfit(vector<int>& prices) 
		{
			int m = prices.size();
			if (m == 0)
				return 0;
			int min = prices[0];
			int money = 0;
			for (auto iter : prices)
			{
				if (min > iter)
					min = iter;
				else
				{
					if (money < iter - min)
						money = iter - min;
				}
			
			}
			return  money;
		}
			
};