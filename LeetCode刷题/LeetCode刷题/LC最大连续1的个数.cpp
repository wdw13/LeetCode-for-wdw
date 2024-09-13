//最大连续1的个数
//给定一个二进制数组 nums ， 计算其中最大连续 1 的个数。
class Solution {
public:
	int findMaxConsecutiveOnes(vector<int>& nums) {
		int a = 0, temp = 0;
		for (int i = 0; i < nums.size(); ++i) {
			if (nums[i] == 1) {
				temp++;
			}
			else {
				temp = 0;
			}
			a = max(a, temp);
		}
		return a;
	}
};