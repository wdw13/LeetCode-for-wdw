﻿//数组拆分1
//给定长度为 2n 的整数数组 nums ，你的任务是将这些数分成 n 对, 
//例如(a1, b1), (a2, b2), ..., (an, bn) ，使得从 1 到 n 的 min(ai, bi) 总和最大。
//返回该 最大总和。
class Solution {
public:
	int arrayPairSum(vector<int>& nums) {
		sort(nums.begin(), nums.end());
		int a = 0;
		for (int i = 0; i < nums.size(); i = i + 2) {
			a = a + nums[i];
		}
		return a;
	}
};