#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int q,x;
    string str("0");
    cin>>q;
    for(int i = 0;i < q;i++){
        cin>>x;
        while(x >= str.length()){
            string t;
            for(int j=0;j<str.length();j++){
                if(str.at(j)=='0') t+='1';
                else t+='0';
            }
      
        str.append(t);
        //cout<<str.length()<<x<<endl;
        }
        //cout<<str<<"fdf"<<str[x]<<endl;
        cout<<str[x]<<endl;
    }
    return 0;
}