//LC移动零
//给定一个数组 nums，编写一个函数将所有 0 移动到数组的末尾，同时保持非零元素的相对顺序。
//请注意 ，必须在不复制数组的情况下原地对数组进行操作。

class Solution {
public:
	void moveZeroes(vector<int>& nums) {
		int a = 0;
		for (int i = 0; i < nums.size(); i++) {
			if (nums[i] != 0) {
				swap(nums[a], nums[i]);
				a++;
			}
		}
	}
};

