#include <iostream>
#include<algorithm>

using namespace std;

int main()
{

//lets try the brute force method
 int n,a,b;
 cin>>n>>a>>b;
 int ans=0;
 for(int i=1;i<=n;i++)
 {
     if(abs(i-1)>=a && n-i<=b )
     {
         ans+=1;
     }
 }
 cout<<ans<<endl;
 return 0;


}
