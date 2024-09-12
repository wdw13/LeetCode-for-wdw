//实现strStr
//给你两个字符串 haystack 和 needle ，请你在 haystack 字符串中找出 needle 字符串的第一个匹配项的下标（下标从 0 开始）。
//如果 needle 不是 haystack 的一部分，则返回  - 1 。
class Solution {
public:
	int strStr(string haystack, string needle) {
		int m = needle.length(), n = haystack.length();
		if (!m)return 0;
		vector <int> next(m, 0);
		next[0] = -1;
		int j = -1;
		for (int i = 0; i < m - 1; i++) {
			while (j >= 0 && needle[j] != needle[i])j = next[j];
			j++;
			next[i + 1] = j;
		}
		j = 0;
		for (int i = 0; i < n; i++) {
			while (j >= 0 && haystack[i] != needle[j])j = next[j];
			j++;
			if (j == m)return i - m + 1;
		}
		return -1;
	}
};
