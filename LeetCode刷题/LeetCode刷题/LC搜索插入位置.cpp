//LC ��������λ��
//����һ�����������һ��Ŀ��ֵ�����������ҵ�Ŀ��ֵ�������������������Ŀ��ֵ�������������У����������ᱻ��˳������λ�á�
//�����ʹ��ʱ�临�Ӷ�Ϊ O(log n) ���㷨��

class Solution {
public:
	int searchInsert(vector<int>& nums, int target) {
		for (int i = 0; i < nums.size(); ++i)
		{
			if (nums[i] >= target) {
				return i;
			}
		}
		return nums.size();
	}
};