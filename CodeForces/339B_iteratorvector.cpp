#include <bits/stdc++.h>
#define ll long long
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
#define MOD 1000000007
#define endl '\n'
#define vi vector<int>
#define vll vector<ll>
#define all(v) v.begin(),v.end()
using namespace std;    

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll x,n,m,ct=0;;
	cin>>n>>m;
	vll a;
	for (int i = 0; i < m; ++i){
		cin>>x;
		a.pb(x);
	}
	x=1;
	//vector<long long>::iterator i;
	for (int i=0;i<a.size();++i){
		if(a[i]<x) ct+=(n-x+a[i]);
		else if(a[i]>x) ct+=a[i]-x;
		else ct+=0;
		x=a[i];
	}
	cout<<ct;
	return 0;
}  