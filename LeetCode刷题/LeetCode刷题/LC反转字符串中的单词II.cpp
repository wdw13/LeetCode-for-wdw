//反转字符串中的单词II
//给定一个字符串 s ，你需要反转字符串中每个单词的字符顺序，同时仍保留空格和单词的初始顺序。

class Solution {
public:
	string reverseWords(string s) {
		vector<string> v;
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
					reverse(s1.begin(), s1.end());
					v.push_back(s1);
				}

				s1 = "";
			}
		}
		string s2 = "";
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