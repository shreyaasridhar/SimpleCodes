#include <bits/stdc++.h>
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
using namespace std;
void  _main();
int main() {cin.tie(0);ios::sync_with_stdio(false); _main(); return 0; }
    
void _main(){
	int n,ct=0,flag;
	string s;
	cin>>n;
	rep(i,0,n){
		cin>>s;
		for (auto& it: s)  {
			if(it=='+') {flag=0;break;}  
			if(it=='-') {flag=1;break;}}
		if(flag==0) ct+=1;
		if(flag==1) ct-=1;		

	}
	cout<<ct;
}