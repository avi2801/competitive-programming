#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    //the difference of ascii value is 32 between capital and small leters
    if( int(s[0]>96))
    {
        s[0]=+char(int(s[0]+32))
    }
    cout<<s<<endl;
    return 0;
}
