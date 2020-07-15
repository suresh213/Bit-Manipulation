#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
     int n,i;
     cin>>n;
     for(i=13;i>=0;i--) 
     {
     	cout<<((n>>i)&1);
	 }
	 cout<<endl;
    }
	return 0;
}