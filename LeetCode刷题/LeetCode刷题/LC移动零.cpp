//LC�ƶ���
//����һ������ nums����дһ������������ 0 �ƶ��������ĩβ��ͬʱ���ַ���Ԫ�ص����˳��
//��ע�� �������ڲ���������������ԭ�ض�������в�����

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

