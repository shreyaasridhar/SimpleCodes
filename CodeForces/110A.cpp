#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    long long n,m,rem,count=0,c=0,ct=0;
    //int b[14] = {4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    cin>>m;
    while(m!=0) {
        rem = m %10;
        m = m/10;
        if((rem==4)||(rem==7))  count++;
    }
    int x=count;
    while(count!=0){
    	rem = count %10;
        c++;
        count/=10;
        if((rem==4)||(rem==7))  ct++;
    }
    /*
    for(int i=0;i<14;i++){
        if(b[i]==count) {            cout<<"YES";
            return 0;
        }
    }*/
    if(ct==c && ct!=0) cout<<"YES";
    else cout<<"NO";
    return 0;
}