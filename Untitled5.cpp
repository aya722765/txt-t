#include<iostream>
#include<math.h>
using namespace std;
int fact(int n)
{
	int f=1;
	for(int i=n;i>0;i--)
	f=f*i;
	return f;
}
int main()
{
	int y=0;int n;int x;
	cin>>x>>n;
	for(int i=0;i<=n;i+=2)
	{
		y=y+(pow(x,(i+2))/fact(i+2));
		
		
		
	}
	cout<<y; 
}
