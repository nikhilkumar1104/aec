#include <bits/stdc++.h>
using namespace std;
int main() {
// your code goes here
int times,N,M,K,r;
cout<<"ENTER NUMBER OF TEST CASES: "<<endl;
cin>>times;
while(times--)
{
cout<<"ENTER VALUE FOR TEST CASE: "<<times+1<<endl;
 cin>>N>>M>>K;
 r=K+N;
 if(r<=M)
 {
 cout<<"YES"<<endl;
 }
 else
 {
 cout<<"NO"<<endl;
 }
}
return 0;
}