//��ת�ַ�����ĵ���
//����һ���ַ��� s �����㷴ת�ַ����� ���� ��˳��
//���� ���ɷǿո��ַ���ɵ��ַ�����s ��ʹ������һ���ո��ַ����е� ���� �ָ�����
//���� ���� ˳��ߵ��� ���� ֮���õ����ո����ӵĽ���ַ�����
//ע�⣺�����ַ��� s�п��ܻ����ǰ���ո�β��ո���ߵ��ʼ�Ķ���ո�
//     ���صĽ���ַ����У����ʼ�Ӧ�����õ����ո�ָ����Ҳ������κζ���Ŀո�

class Solution {
public:
	string reverseWords(string s) {
		vector<string>v;
		string s1 = "";
		for (int i = 0; i < s.length(); i++)
		{
			if (s[i] != ' ')
			{
				s1 += s[i];
			}
			if (s[i] == ' ' || i == s.length() - 1)
			{
				if (s1 != "")
				{
					v.push_back(s1);
				}

				s1 = "";
			}
		}
		string s2 = "";
		reverse(v.begin(), v.end());
		for (vector<string>::iterator it = v.begin(); it != v.end(); ++it)
		{
			string s3 = *it;
			if (it != v.end() - 1)
			{
				s3 += ' ';
			}
			s2 += s3;
		}
		return s2;
	}
};