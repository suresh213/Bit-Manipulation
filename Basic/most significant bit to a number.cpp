#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,i;
	    cin>>n;
	    for(i=n;i>=0;i--)
	    {
	        if(!(i&(i-1)))
	        {
	            cout<<i<<endl;
	            break;
	        }
	    }
	}
	return 0;
}