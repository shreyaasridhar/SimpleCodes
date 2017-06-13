#include <bits/stdc++.h>
#define fr(i,x,y) for(i = x; i < y ; ++i)
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s;
    int i,q,j;
    cin>>q;
    fr(i,0,q){
        cin>>s;
        int sum=0;
        fr(j,1,s.length()){
            int t=pow(10,j);
            string subs;
            subs.append(to_string(t));
            subs.append("1");
            int count = 0;
            size_t nPos = s.find(subs, 0); // fist occurrence
            while(nPos != string::npos){
                count++;
                nPos = s.find(subs, nPos+1);
            }
        sum+=count;
           // cout<<subs<<count<<endl;
        }
        cout<<sum<<endl;        
    }
    return 0;
}
