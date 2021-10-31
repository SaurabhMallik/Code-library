#include<bits/stdc++.h>
using namespace std;

int check(int x)
{
  if (x<2)
    return 0;
  for (int i=2;i<=sqrt(n)+1;i++)
  {
    if (n%i==0)
      return 0;
  }
  return 1;
}

int main()
{
  int n;
  cin>>n;
  int flag=check(n);
  if (flag==1)
    cout<<"Prime!";
  else
    cout<<"Not prime!";
}
