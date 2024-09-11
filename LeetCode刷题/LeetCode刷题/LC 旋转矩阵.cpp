//旋转矩阵
//给你一幅由 N × N 矩阵表示的图像，其中每个像素的大小为 4 字节。请你设计一种算法，将图像旋转 90 度。
//不占用额外内存空间能否做到？

class Solution {
public:
	void rotate(vector<vector<int>>& matrix) {
		int n = matrix.size();
		for (int i = 0; i < n; ++i) {
			for (int j = i + 1; j < n; ++j) {
				swap(matrix[i][j], matrix[j][i]);
			}
		}
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < n / 2; ++j) {
				swap(matrix[i][j], matrix[i][n - j - 1]);
			}
		}
	}
};