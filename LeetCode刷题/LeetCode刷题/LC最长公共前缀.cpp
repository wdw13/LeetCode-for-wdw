//�����ǰ׺
//��дһ�������������ַ��������е������ǰ׺��
//��������ڹ���ǰ׺�����ؿ��ַ��� ""��
class Solution {
public:
	string longestCommonPrefix(vector<string>& strs) {
		string a = strs[0];
		for (int i = 0; i < strs.size(); ++i) {
			for (int j = 0; j < a.size(); ++j) {
				if (a[j] != strs[i][j]) {
					a.erase(j);
				}
			}
		}
		return a;
	}
};