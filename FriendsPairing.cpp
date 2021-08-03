#include <bits/stdc++.h>
using namespace std;
int Friends(int n)
{
  if (n == 0 || n == 1 || n == 2)
    return n;
  else
    return Friends(n - 1) + Friends(n - 2) * (n - 1);
}
int main()
{
  int n;
  cin >> n;
  cout << Friends(n);
  return 0;
}