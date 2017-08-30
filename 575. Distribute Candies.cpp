class Solution {
public:
   //https://leetcode.com/problems/distribute-candies/description/
	int distributeCandies(vector<int>& candies)
	{
		set<int> se;
		se.insert(candies.begin(), candies.end());
		return se.size() >= candies.size() / 2 ? candies.size() / 2 : se.size();
	}
};