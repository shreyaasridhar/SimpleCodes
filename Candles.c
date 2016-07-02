#include<iostream>
using namespace std;
int main()
{
    int a[10],n,q;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    cin>>q;
    for(int i=1;i<=q;i++)
    {
        int c,b,sum=0,j=0;
        cin>>b>>c;
        int l=j*c;
        while(b+l<=n)
        {
        	sum+=a[b+l];
        	j++;
        	l=j*c;
		}
        cout<<sum<<endl;
    }
    return 0;
}
