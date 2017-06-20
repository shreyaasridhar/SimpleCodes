#include <bits/stdc++.h>
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define printA(s)  for (auto& it: s)  cout << it << ' ';
#define what(x) cout<< #x << " is " << x << endl;
using namespace std;
typedef long long ll;
typedef vector< pair < int , int > > vpii;
typedef vector < int > vi;
typedef vector < ll > vll;
#define all(v) v.begin(),v.end()
int rev(int x){int t=(x%10);x/=10;int u=(x%10);return (t*10)+u;}
void _main(); int main() {cin.tie(0);ios::sync_with_stdio(false); _main(); return 0; }
    
void _main(){
	string s;
	int i,rh,h,m;
	cin>>s;
	rep(i,0,5){
		if(i==0){
			h=((int(s[i]-'0')*10)+int(s[i+1]-'0'));
		}
		if(i==3)
			m=((int(s[i]-'0')*10)+int(s[i+1]-'0'));
	}
	rh=rev(h);
	if(rh==(m)) cout<<0;
	else if((rh)>(m) and rh<60) cout<<(rh)-(m);
	else{
		int ih=h;
		if(h+1==24) cout<<60-m;
		else{
			h+=1;
			while(rev(h)>=60){
				h+=1;
			}
			rh=rev(h);
			cout<<rh+(h-ih-1)*60+(60-m);
		}
	} 
}  