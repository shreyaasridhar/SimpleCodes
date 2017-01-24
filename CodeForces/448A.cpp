#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int m=0,c=0,n,x;
    for(int i=0;i<3;i++){
    	cin>>x;
    	c+=x;
    }
    for(int i=0;i<3;i++){
    	cin>>x;
    	m+=x;
    }
    cin>>n;
    int sc,sm;
    sc=c/5;
    sm=m/10;
    if(c%5!=0) sc+=1;
    if(m%10!=0) sm+=1;
    int res=sc+sm;
    if (res <= n) cout<<"YES";//<<sc+sm<<n;
    else cout<<"NO";
    return 0;
}