#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    if(n&1)
	    {
	        cout<<"odd";
	    }
	    else
	    {
	        cout<<"even";
	    }
	    cout<<endl;
	}
	return 0;
}