#include <bits/stdc++.h>
using namespace std;
int knapsack(int w[], int value[], int n, int W)
{
  if (n == 0 || W == 0)
    return 0;
  if (w[n - 1] > W)
    return knapsack(w, value, n - 1, W);
  return max(knapsack(w, value, n - 1, W), knapsack(w, value, n - 1, W - w[n - 1]) + value[n - 1]);
}
int main()
{
  int w[] = {10, 20, 30};
  int value[] = {50, 100, 150};
  int W = 50;
  cout << knapsack(w, value, 3, W);
  return 0;
}