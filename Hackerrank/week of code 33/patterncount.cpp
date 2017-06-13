#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
using namespace std; void _main(); int main() {cin.tie(0);cout.tie(NULL);ios::sync_with_stdio(false); _main(); return 0; }
    
void _main(){
        string s;
        int i,q,j;
        cin>>q;
        rep(i,0,q){
                cin>>s;
                int ct=0;
                for(j=0;j<s.length();){
                    if(s[j]=='1'){
                        j+=1;
                        while(s[j]=='0'){
                                j+=1;
                                if(s[j]=='1')
                                        ct+=1;
                        }
                    }
                    else
                        j+=1;
                
                }
                cout<<ct<<endl;    
  }
}