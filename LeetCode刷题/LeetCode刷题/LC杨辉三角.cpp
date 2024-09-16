//�������
//����һ���Ǹ����� numRows�����ɡ�������ǡ���ǰ numRows �С�
//�ڡ�������ǡ��У�ÿ�����������Ϸ������Ϸ������ĺ͡�

class Solution {
public:
	vector<vector<int>> generate(int numRows) {
		vector<vector<int>> ret;
		if (numRows >= 1) ret.push_back({ 1 });
		if (numRows >= 2) ret.push_back({ 1,1 });
		for (int i = 3; i <= numRows; i++) {
			vector<int> m;
			m.push_back(1);
			for (int j = 1; j < i - 1; j++) {
				m.push_back(ret[i - 2][j - 1] + ret[i - 2][j]);
			}
			m.push_back(1);
			ret.push_back(m);
		}
		return ret;
	}
};
