#include <bits/stdc++.h>
using namespace std;
int a[26]={0};
int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	string s;
	cin>>s;
	int b=0,ans=1000000;
	
	
	for(int i=0;i<s.size();i++){
		if(s[i]=='B')  b++;
		else if(s[i]>='a' && s[i]<='z')	a[s[i]%'a']++;
	}
	ans=min(ans,b);
	ans=min(ans,a[0]/2);
	ans=min(ans,a['u'%'a']/2);
	ans=min(ans,a['l'%'a']);
	ans=min(ans,a['b'%'a']/2);
	ans=min(ans,a['s'%'a']);
	ans=min(ans,a['r'%'a']);
	cout<<ans;
	return 0;
}