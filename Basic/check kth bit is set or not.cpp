#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    if((n>>k)&1)
	    {
	        cout<<"Yes";
	    }
	    else
	    {
	        cout<<"No";
	    }
	    cout<<endl;
	}
	return 0;
}