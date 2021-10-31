#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;

int p[N]={0};

int main()
{
  int t,n;
  cin>>t;
  for (int i=2;i<=sqrt(N)+1;i++)
  {
    if (p[i]==0)
    {
      for (int j=2*i;j<N;j+=i)
        p[j]=1;
    }
  }
  while (t--)
  {
    cin>>n;
    if (p[n]==0)
      cout<<"Prime"<<endl;
    else
      cout<<"Not prime"<<endl;
  }
}
