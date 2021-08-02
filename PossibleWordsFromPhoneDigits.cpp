#include <bits/stdc++.h>
using namespace std;
string KeypadArr[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
void keypad(string s, string ans)
{
  if (s.length() == 0)
  {
    cout << ans << endl;
    return;
  }
  char ch = s[0];
  string code = KeypadArr[ch - '0'];
  string res = s.substr(1);
  for (int i = 0; i < code.length(); i++)
  {
    keypad(res, ans + code[i]);
  }
}

int main()
{
  keypad("23", "");
}