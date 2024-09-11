//�Խ��߱���
//����һ����СΪ m x n �ľ��� mat �����ԶԽ��߱�����˳����һ�����鷵����������е�����Ԫ�ء�

class Solution {
public:
	vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
		vector<int> ans;
		if (mat.empty())
			return ans;
		int row = mat.size(), col = mat[0].size(), c = 0, r = 0;
		for (int i = 0; i < row + col - 1; i++)
		{
			if (i % 2)
			{
				c = (i < col) ? i : col - 1;
				r = i - c;
				while (c >= 0 && r < row)
					ans.push_back(mat[r++][c--]);
			}
			else
			{
				r = (i < row) ? i : row - 1;
				c = i - r;
				while (c < col && r >= 0)
					ans.push_back(mat[r--][c++]);
			}
		}
		return ans;
	}
};