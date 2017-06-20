#include <bits/stdc++.h>
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
using namespace std;
void _main(); int main() {cin.tie(0);ios::sync_with_stdio(false); _main(); return 0; }
    
void _main(){
	string s;
	int i;
	cin>>s;
	s[0]=toupper(s[0]);
	cout<<s[0];
	rep(i,1,s.length()) cout<<s[i];
	
}  