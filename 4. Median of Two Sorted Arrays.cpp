//4. Median of Two Sorted Arrays
	//https://leetcode.com/problems/median-of-two-sorted-arrays/description/
	class Solution
	{
		public:
		double findMedianSortedArrays(vector<int>& nums1 , vector<int>& nums2)
		{
			vector<int> nums3;
			double median = 0;
			nums3.resize(nums1.size() + nums2.size());
			merge(nums1.begin() , nums1.end() , nums2.begin() , nums2.end() , nums3.begin());

			if (nums3.size() % 2 == 1)
				return double(nums3[nums3.size() / 2]);
			else
				return double(nums3[nums3.size() / 2 - 1] + nums3[nums3.size() / 2]) / 2;
		}
	};