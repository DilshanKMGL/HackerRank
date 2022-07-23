#include <string>
#include <iostream>
#include <vector>

using namespace std;

// using double for loops
int lonelyinteger1(vector<int> a) {
  for (int i = 0; i < a.size(); i++)
  {
    bool isFind = false;
    for (int j = 0; j < a.size(); j++)
    {
      if ((i!=j) && (a[i] == a[j]))
      {
        isFind = true;
        break;
      }
    }

    if (!isFind)
      return a[i];
  }

  // if size of array is 1
  return a[0];
}

// using bit wise operation
int lonelyinteger2(vector<int> a) {
  int answer = 0;
  for (int i = 0; i < a.size(); i++)
  {
    answer ^= a[i];
  }
  return answer;

}

int main()
{
  vector<int> a = { 1 };// , 1, 3// , 2, 3, 4, 3, 2, 1

  cout << lonelyinteger2(a);
  return 0;
}
