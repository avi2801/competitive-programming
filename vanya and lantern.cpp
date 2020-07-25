#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;
int main()
{
 int n,k,ar[1001];
 cin>>n>>k;
 for (int i=0;i<n;i++)
 {
     cin>>ar[i];
 }
 sort(ar,ar+n);
 int m=max(ar[0],k-ar[n-1])*2;
 for(int i=0;i<n-1;i++)
 {
     m=max(m,ar[i+1]-ar[i]);
 }
 //using fixed and setprecision here
 cout<<fixed<<setprecision(10)<<m/2.0;
 return 0;
}

