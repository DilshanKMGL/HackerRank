#include <iostream>
#include <vector>

using namespace std;

// 
int diagonalDifference(vector<vector<int>> arr) {
	int sumLeftRight = 0;
	int sumRightLeft = 0;
	for (int i = 0; i < arr.size(); i++)
	{
		sumLeftRight += arr[i][i];
		sumRightLeft += arr[i][arr.size() - i - 1];
	}

	return abs(sumLeftRight - sumRightLeft);

}

int main(void)
{
	vector<vector<int>> a = { {11,2,4},{4,5,6},{10,8,-12} };
	cout << diagonalDifference(a);
	return 0;
}