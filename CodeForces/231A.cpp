#include <bits/stdc++.h>
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
using namespace std;
void  _main();
int main() {cin.tie(0);ios::sync_with_stdio(false); _main(); return 0; }
    
void _main(){
	int n,i,x,ct=0,y,z,mi;
	cin>>n;
	rep(i,0,n){
		cin>>x>>y>>z;
		if((x+y+z)>=2) ct+=1;
	}
	cout<<ct;
}