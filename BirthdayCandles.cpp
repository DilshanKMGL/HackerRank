#include <iostream>
#include <vector>

using namespace std;

int birthdayCakeCandles(vector<int> candles) {
  int maxValue = 0;
  for (int i = 0; i < candles.size(); i++)
  {
    if (maxValue < candles[i])
      maxValue = candles[i];
  }

  int count = 0;
  for (int i = 0; i < candles.size(); i++)
    if (maxValue == candles[i])
      count++;

  return count;
}

int main(void)
{
  vector<int> vec = {4,4,1,3};
  cout << birthdayCakeCandles(vec);
  return 0;
}