#include <bits/stdc++.h>
using namespace std;
void Substrings(string s, string ans)
{
  if (s.length() == 0)
  {
    cout << ans;
    return;
  }
  char ch = s[0];
  string res = s.substr(1);
  Substrings(res, ans);
  Substrings(res, ans + ch);
}
int main()
{
  string s;
  cin >> s;
  Substrings(s, " ");
  cout << endl;
  return 0;
}