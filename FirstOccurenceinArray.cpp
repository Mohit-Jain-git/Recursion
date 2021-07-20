#include <bits/stdc++.h>
using namespace std;
int firstoccur(int a[], int n, int i, int key)
{
  if (i == n)
    return -1;
  if (a[i] == key)
    return i;
  return firstoccur(a, n, i + 1, key);
}
int main()
{
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];
  int key;
  cin >> key;
  cout << firstoccur(a, n, 0, key);
  return 0;
}