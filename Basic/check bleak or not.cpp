#include <iostream>
using namespace std;
int countsetbits(int n);
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,i,result=1;
	    cin>>n;
	    for(i=n;i>0;i--)
	    {
	        if(((i)+countsetbits(i))==n)
	        {
	          result=0;
	          break;
	         }
	    }
	    cout<<result<<endl;
	}
	return 0;
}
int countsetbits(int n){
    int count=0;
    while(n)
    {
        n=n&(n-1);
        count++;
    }
    return count;
}
