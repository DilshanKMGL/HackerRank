#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// sort the first array in assending order
// sort the second array in decending order
// check the constraint given
// if sum of the corresponding values in the array is less than given threshold return "NO"
// else return true
string twoArrays(int k, vector<int> A, vector<int> B)
{
	// sort the first array in accending order
	sort(A.begin(), A.end());
	// sort the second array in decending order
	// use greater to sort the array in decenting order
	sort(B.begin(), B.end(), greater<int>());

	// check the given threshold
	for (int i = 0; i < A.size(); i++)
		if (A[i] + B[i] < k)    return "NO";
	return "YES";
}

int main(void)
{
	int k = 10;
	vector<int> a = { 1,2,2,1 };
	vector<int> b = { 3,10,50,4 };
	twoArrays(k, a, b);

	// [1,2,3,1,4,3,2,1,1]
}