//�������1�ĸ���
//����һ������������ nums �� ��������������� 1 �ĸ�����
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