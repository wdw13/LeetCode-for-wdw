//66.��һ  ��
//����һ���� ���� ��ɵ� �ǿ� ��������ʾ�ķǸ��������ڸ����Ļ����ϼ�һ��
//���λ���ִ�����������λ�� ������ÿ��Ԫ��ֻ�洢�������֡�
//����Լ���������� 0 ֮�⣬��������������㿪ͷ��

class Solution {
public:
	vector<int> plusOne(vector<int>& digits) {
		for (int i = digits.size() - 1; i >= 0; --i)
		{
			digits[i]++;
			if (digits[i] == 10)
			{
				digits[i] = 0;
			}
			else
			{
				return digits;
			}
		}
		digits.insert(digits.begin(), 1);
		return digits;
	}
};
