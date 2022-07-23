#include <iostream>
#include <vector>

using namespace std;

void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
	for (int i = 0; i < apples.size(); i++)
	{
		apples[i] += a;
	}
	for (int i = 0; i < oranges.size(); i++)
	{
		oranges[i] += b;
	}

	int appleCount = 0;
	int orangeCount = 0;
	for (int dis : apples)
	{
		if ((s <= dis) && (dis <= t))
			appleCount++;
	}
	for (int dis : oranges)
	{
		if ((s <= dis) && (dis <= t))
			orangeCount++;
	}

	cout << appleCount << endl;
	cout << orangeCount << endl;
}

void countApplesAndOranges1(int s, int t, int a, int b, vector<int> apples, vector<int> oranges)
{
	auto countFruit = [](vector<int> fruits, int pos, int leftLim, int rightLim)->int {
		
		int count =0;
		for (int fruit : fruits)
		{
			if ((leftLim <= fruit + pos) && (fruit + pos <= rightLim))
				count++;
		}
		return count;
	};

	int appleCount = countFruit(apples, a, s, t);
	int orangeCount = countFruit(oranges, b, s, t);
	
	cout << appleCount << endl;
	cout << orangeCount << endl;
}

int main(void)
{
	int s = 7, t = 10, a = 4, b = 12;
	vector<int> apples = { 2,3,-4 };
	vector<int> oranges = { 3,-2,-4 };
	countApplesAndOranges1(s, t, a, b, apples, oranges);
	return 0;
}