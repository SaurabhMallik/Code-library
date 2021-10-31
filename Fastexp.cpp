#include<bits/stdc++.h>
using namespace std;

int exponentiation(int x, int y, int n)
{
  int ans=1;
  while (y!=0)
  {
    if (y&1==1)
    {
      ans=(ans*x)%n;
    }
    x=(x*x)%n;
    y>>=1;
  }
  return ans;
}

int main()
{
  int a,b,n;
  cin>>a>>b>>n;
  cout<<"a^b mod n = "<<exponentiation(a,b,n)<<endl;
}
