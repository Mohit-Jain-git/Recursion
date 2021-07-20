#include <bits/stdc++.h>
using namespace std;
int lastoccur(int a[], int n, int i, int key)
{
  if (i == n)
    return -1;
  int rest = lastoccur(a, n, i + 1, key);
  if (rest != -1)
  {
    return rest;
  }
  if (a[i] == key)
    return i;
  return -1;
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
  cout << lastoccur(a, n, 0, key);
  return 0;
}