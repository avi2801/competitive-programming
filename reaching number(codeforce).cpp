#include<iostream>
#include<string.h>
//a simple approach to solve the prob
using namespace std;
int main()
{
  long long int n;
  int ans=9;
  cin>>n;
  while(n>9)
  {
      n+=1;
      if(n%10==0)
      {
          while(n%10==0)
          {
              n=n/10;
          }
      }
      ans+=1;
  }
  cout<<ans<<endl;
return 0;
}
