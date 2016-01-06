#include<iostream>
using namespace std;
int main()
{
	float a[20],m=0;
	int n;cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(m<a[i])
		m=a[i];
	}
	cout<<"\nMaximum:"<<m;
	return 0;
}
