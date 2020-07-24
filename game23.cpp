#include <iostream>
#include<algorithm>

using namespace std;

int main()
{

//lets try the brute force method
 int a,b;
 cin>>a>>b;
 int ans,d=0;
 if (b%a!=0)
 {
     cout<<-1<<endl;
 }
 else{
    ans=b/a;
    while(ans%2==0)
    {
        ans=ans/2;
        d+=1;
    }
    while(ans%3==0)
    {
        ans=ans/3;
        d+=1;
    }
    if(ans==1)
    {
        cout<<d<<endl;
    }
    else{
        cout<<-1<<endl;
    }
 }
}
