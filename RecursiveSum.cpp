#include <bits/stdc++.h>
using namespace std;
int recursiveSum(int n)
{
  if (n == 0)
  {
    return 0;
  }
  int presum = recursiveSum(n - 1);
  return n + presum;
}
int main()
{
  int n;
  cin >> n;
  cout << recursiveSum(n);
  return 0;
}