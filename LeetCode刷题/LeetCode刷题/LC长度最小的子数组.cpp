//长度最小的子数组
//给定一个含有 n 个正整数的数组和一个正整数 target 。
//找出该数组中满足其总和大于等于 target 的长度最小的 子数组 [numsl, numsl + 1, ..., numsr - 1, numsr] ，
//并返回其长度。如果不存在符合条件的子数组，返回 0 。

class Solution {
public:
	int minSubArrayLen(int target, vector<int>& nums) {
		int quick, slow, sum = 0, ans = nums.size() + 1;
		quick = slow = 0;                               //快慢指针初始化

		for (; quick < nums.size(); ++quick)
		{
			sum += nums[quick];                       //读入快指针所走元素
			if (sum >= target)                         //达到目标后进行收缩
			{
				while (1)
				{                                   //慢指针可以往后移动多少
					if (sum - nums[slow] >= target) sum -= nums[slow++];
					else break;
				}

				if (quick - slow + 1 < ans) ans = quick - slow + 1;  //更新最小长度
			}
		}

		if (ans < nums.size() + 1) return ans;               //返回判断是否有达到目标
		else return 0;
	}
};