\\Maximum sum such that no two elements are adjacent
#include <bits/stdc++.h>
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define printA(s)  for (auto& it: s)  cout << it << ' ';
#define what(x) cout<< #x << " is " << x << endl;
#define mp make_pair
#define eb emplace_back
#define ff first
#define ss second
using namespace std;
typedef long long ll;
typedef vector< pair < int , int > > vpii;
typedef vector < int > vi;
typedef vector < ll > vll;
#define all(v) v.begin(),v.end()
void _main(); int main() {cin.tie(0);ios::sync_with_stdio(false); _main(); return 0; }
            
void _main(){
	int x;
	vi a;
	while(cin>>x)	a.emplace_back(x);
	int incl=a[0],exc=0,temp;

	for (int i=1;i<a.size();i++){
		temp=(incl>exc)?incl:exc;
		incl=exc+a[i];
		exc=temp;
	}
	cout<<((incl>exc)?incl:exc);
}  