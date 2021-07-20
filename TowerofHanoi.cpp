#include <bits/stdc++.h>
using namespace std;
void toh(int n, char src, char help, char dest)
{
  if (n == 0)
  {
    return;
  }
  toh(n - 1, src, dest, help);
  cout << "Move from " << src << " to " << dest << endl;
  toh(n - 1, help, src, dest);
}
int main()
{
  int n;
  cin >> n;
  toh(n, 'A', 'B', 'C');
  return 0;
}