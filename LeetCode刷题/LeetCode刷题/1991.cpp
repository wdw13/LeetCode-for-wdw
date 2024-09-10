﻿//1991 简单
//给你一个整数数组 nums ，请计算数组的 中心下标 。
//数组 中心下标 是数组的一个下标，其左侧所有元素相加的和等于右侧所有元素相加的和。
//如果中心下标位于数组最左端，那么左侧数之和视为 0 ，因为在下标的左侧不存在元素。这一点对于中心下标位于数组最右端同样适用。
//如果数组有多个中心下标，应该返回 最靠近左边 的那一个。如果数组不存在中心下标，返回 - 1 。
class Solution {
public:
	int pivotIndex(vector<int>& nums) {
		if (nums.empty()) {
			return -1;
		}
		int left = 0;
		int acc = accumulate(nums.begin(), nums.end(), 0);
		for (int i = 0; i < nums.size(); ++i) {
			if (left * 2 + nums[i] == acc) {
				return i;
			}
			else {
				left += nums[i];
			}
		}
		return -1;
	}
};