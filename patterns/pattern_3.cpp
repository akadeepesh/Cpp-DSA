/*
Q.      1
      1 2 3
    1 2 3 4 5
  1 2 3 4 5 6 7
1 2 3 4 5 6 7 8 9
*/

#include <iostream>
using namespace std;

int main()
{
  int N, j, num;
  cout << "Enter A Number :";
  cin >> N;

  for (int i = 1; i <= N; i++)
  {
    for (j = 0; j < N - i; j++)
    {
      cout << " ";
    }
    j = 1;
    num = 1;
    while (j <= 2 * (i - 1))
    {
      cout << num;
      j++;
      num++;
    }
    cout << endl;
  }
}