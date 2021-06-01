#include<iostream>
using namespace std;
void print(int n)
{ 
   if(n)
   cout<<n<<" ";
   else
   return;
   print(n-1);

}
int main()
{ 
  int n;
  cin>>n;
  print(n);
  return 0;
}