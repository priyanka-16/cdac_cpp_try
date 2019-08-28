#include<iostream>
using namespace std;
int main()
{
	int n,x,sum=0;
	cin>>n;
	x=n%10;
	n=n/1000;
	sum=n+x;
	cout<<sum;
	return 0;
}

