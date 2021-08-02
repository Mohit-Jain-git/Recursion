#include <bits/stdc++.h>
int countPath(int s, int e)
{
  if (s == e)
    return 1;
  if (s > e)
    return 0;
  int count = 0;
  for (int i = 1; i <= 6; i++)
  {
    count += countPath(s + i, e);
  }
  return count;
}
using namespace std;
int main()
{
  cout << countPath(0, 5);
  return 0;
}