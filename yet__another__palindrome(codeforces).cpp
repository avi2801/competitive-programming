#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int testcase;
    cin>>testcase;
    while(testcase--)
    {

        int n,i,j;
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        int value=0,ans=0;
        for(i=0;i<n-2;i++)
        {
            value=ar[i];
            for( j=i+2;j<n;j++)
            {
                if (value==ar[j]){
                    //check for the same number if it is there palindrome is present
                    ans+=1;
                    cout<<"YES"<<endl;
                    break;
                    }

            }
            if (ans==1)
            {
                break;
            }
        }
        if (ans==0)
            cout<<"NO"<<endl;
    }
    return 0;
}

