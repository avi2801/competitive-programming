#include<iostream>
#include<math.h>

using namespace std;
int main()
{
    int cost1,cost2,cost3;
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    cost1=n*a;
    cost2=(n/m)*b+(n%m)*a;
    if(n%m==0)
    {
        cost3=(n/m)*b;
    }
    else{
        cost3=((n/m)+1)*b;
    }
    int t=0;
    t=min(cost1,min(cost2,cost3));
    cout<<t;
    return 0;
}
