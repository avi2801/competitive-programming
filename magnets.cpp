#include<iostream>
#include<string>
using namespace std;
int main()
{

  int tc;
    int ans=0;
    cin>>tc;
    string val=" ";
    while(tc--)
    {
        string s;
        cin>>s;
        if( s!=val)
        {
            ans+=1;
        }
        val=s;
    }
    cout<<ans<<endl;
    return 0;
}
