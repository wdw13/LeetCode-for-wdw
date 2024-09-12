//������Ӵ�
//����һ���ַ��� s���ҵ� s ����� ���� �Ӵ���

class Solution {
public:
	string longestPalindrome(string s) {
		int len = s.size();
		if (len == 0 || len == 1)
			return s;
		int start = 0;//��¼�����Ӵ���ʼλ��
		int end = 0;//��¼�����Ӵ���ֹλ��
		int mlen = 0;//��¼�������Ӵ��ĳ���
		for (int i = 0; i < len; i++)
		{
			int len1 = expendaroundcenter(s, i, i);//һ��Ԫ��Ϊ����
			int len2 = expendaroundcenter(s, i, i + 1);//����Ԫ��Ϊ����
			mlen = max(max(len1, len2), mlen);
			if (mlen > end - start + 1)
			{
				start = i - (mlen - 1) / 2;
				end = i + mlen / 2;
			}
		}
		return s.substr(start, mlen);
	}
private:
	int expendaroundcenter(string s, int left, int right)
		//������left��rightΪ���ĵĻ��Ĵ�����
	{
		int L = left;
		int R = right;
		while (L >= 0 && R < s.length() && s[R] == s[L])
		{
			L--;
			R++;
		}
		return R - L - 1;
	}
};