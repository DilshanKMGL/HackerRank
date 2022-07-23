#include <iostream>
#include <vector>

using namespace std;

vector<int> gradingStudents(vector<int> grades) {
	for (int i = 0; i < grades.size(); i++)
	{
		int mark = grades[i];
		if (mark >= 38)
		{
			int mod = mark % 5;
			int temp = (mod > 2) ? mark += (5 - mod) : mark;
			grades[i] = mark;
		}
	}
	return grades;
}

int main(void)
{
	vector<int> a = { 73,67,38,33 };
	a = gradingStudents(a);
	for (int i = 0; i < a.size(); i++)
	{
		cout << a[i] << endl;
	}
	return 0;
}