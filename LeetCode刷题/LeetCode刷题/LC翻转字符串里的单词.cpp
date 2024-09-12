//翻转字符串里的单词
//给你一个字符串 s ，请你反转字符串中 单词 的顺序。
//单词 是由非空格字符组成的字符串。s 中使用至少一个空格将字符串中的 单词 分隔开。
//返回 单词 顺序颠倒且 单词 之间用单个空格连接的结果字符串。
//注意：输入字符串 s中可能会存在前导空格、尾随空格或者单词间的多个空格。
//     返回的结果字符串中，单词间应当仅用单个空格分隔，且不包含任何额外的空格。

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