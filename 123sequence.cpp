#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int t=n;
  int one=0,two=0,three=0;
  while(n--)
  {
      int x=0;
      cin>>x;
      if (x==1)
      {
          one+=1;
      }
      else if(x==2)
      {
          two+=1;
      }
      else{
        three+=1;
      }

  }
    cout<<t-max(max(one,two),max(two,three))<<endl;
}
