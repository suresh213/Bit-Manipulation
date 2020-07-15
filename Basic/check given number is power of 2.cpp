#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    long n;
	    cin>>n;
	   
	    if(n&(n-1)||n==0)
	    {
	        cout<<"NO";
	    }
	    else
	    {
	        cout<<"YES";
	    }
	    cout<<endl;
	}
	return 0;
}