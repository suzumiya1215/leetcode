class Solution
 {
	public:

			bool judgeCircle(string moves) 
			{
       			 int d = 0, u = 0, l = 0, r = 0;
				for (string::iterator iter = moves.begin(); iter != moves.end(); ++iter)
				{
					switch (*iter)
					{
					case 'D':++d;
						break;
					case 'U':++u;
						break;
					case 'L':++l;
						break;
					case 'R':++r;
						break;
					default:
						;
					}
				}
				if (d == u&&l == r)
					return true;
				else
					return false;
			}
			
};