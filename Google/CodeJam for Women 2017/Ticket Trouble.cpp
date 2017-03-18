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

struct custom_comparator {
    bool operator()(const std::pair<int, int>& a,  const std::pair<int, int>& b) const
    {
        return less_comparator(std::minmax(a.first, a.second),std::minmax(b.first, b.second));
    }

    std::less<std::pair<int, int> > less_comparator;
};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t,f,s,y,z;
	cin>>t;
	for (int i = 0; i < t; ++i){
		cin>>f>>s;
		vector< pair<int,int> > tck;
		for (int j = 0; j < f; ++j){
			cin>>y>>z;
			tck.pb(mp(y,z));
		}
		std::set<std::pair<int, int>, custom_comparator> unique;
		for (const auto& p : tck) {
        unique.insert(p);
        }
        int m[s],x;
        for (int c = 0; c < s; ++c){
        	x=0;
        for (const auto& p : unique) {
        	if(p.first==c+1 or p.second==c+1) x+=1;
        
        }
        m[c]=x;
    }
    int max=0;
    for (int c = 0; c < s; ++c){
    	if(m[c]>max) max=m[c];
    }
    cout<<"Case #"<<t+1<<": "<<max<<endl;
	}
	return 0;
}  
