#include<iostream>
using namespace std;
int main(){
	int n,res=0;
	cin>>n;
	for(int i=7;i>=0;i--)
	{
		cout<<((n>>i)&1);
	}
	cout<<endl;
	res=((n&(0xAA))>>1)^((n&(0x55))<<1);
	cout<<res<<endl;;
	for(int i=7;i>=0;i--)
	{
		cout<<((res>>i)&1);
	}
}
