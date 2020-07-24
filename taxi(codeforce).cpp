#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
    int n,ans=0;
    cin>>n;
    int ar[5]={0,0,0,0,0};
    for(int i=0; i<n ;i++)
    {
        int x;
        cin>>x;
        ar[x]+=1;
    }

    for(int i=4;i>=1; i--)
    {
        if(i==4)
        {
            ans+=ar[i];
        }
        else if (i==3)
        {
            ans+=ar[i];
            ar[1]-=ar[i];
        }
        else if(i==2)
        {
            ans+=ceil(float(ar[i])/2);
            ar[1]-=(ar[2]*2)%4;

        }
        else if(i==1 && ar[i]>0)
        {

            ans+=ceil(float(ar[i])/4);
        }
    }
    cout<<ans<<endl;
    return 0;

}
