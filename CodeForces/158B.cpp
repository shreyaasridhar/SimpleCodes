#include <bits/stdc++.h>
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define printA(s)  for (auto& it: s)  cout << it << ' ';
#define what(x) cout<< #x << " is " << x << endl;
#define eb emplace_back
using namespace std;
typedef vector < int > vi;
#define all(v) v.begin(),v.end()
void _main(); int main() {cin.tie(0);ios::sync_with_stdio(false); _main(); return 0; }
    
void _main(){
	int n,i,x,ct=0,y,z,mi;
	vi s;
	cin>>n;
	rep(i,0,n){cin>>x; s.eb(x);}
	ct+=count(all(s),4);
	x=count(all(s),3);
	y=count(all(s),2);
	z=count(all(s),1);
	ct+=min(x,z);
	mi=min(x,z);
	x-=mi;
	ct+=x; 
	z-=mi;
	ct+=y/2;
	y=y%2;
	if(y==1 and z>=2){
	ct+=1;	
	y=0;
	z-=2;
	}
	ct+=ceil((float)(y+z)/4);
	cout<<ct;
}