//136.ֻ����һ�ε����� ��
//����һ�� �ǿ� �������� nums ������ĳ��Ԫ��ֻ����һ�����⣬����ÿ��Ԫ�ؾ��������Ρ��ҳ��Ǹ�ֻ������һ�ε�Ԫ�ء�
//�������Ʋ�ʵ������ʱ�临�Ӷȵ��㷨����������⣬�Ҹ��㷨ֻʹ�ó�������ռ䡣

class Solution {
public:
	int singleNumber(vector<int>& nums) {
		sort(nums.begin(), nums.end());
		for (int i = 0, j = 1; j < nums.size(); i += 2, j += 2)
		{
			if (nums[i] != nums[j]) return nums[i];
		}
		return nums[nums.size() - 1];
	}
};