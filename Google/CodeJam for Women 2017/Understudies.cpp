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
	int t,n;
	double s;

	cin>>t;
	for (int i = 0; i < t; ++i){
		vector<double> unav; 
		cin>>n;
		for (int j = 0; j < 2*n; ++j){
			cin>>s;
			unav.pb(s);
		}
		std::sort(unav.begin(), unav.end());
		double p=1;
		for (int j = 0; j < n; ++j){
			p*=(1-(unav[j]*unav[j+n]));
		}
    cout<<"Case #"<<i+1<<": "<< fixed<<std::setprecision(6)<<p<<endl;
	}
	
	return 0;
}  