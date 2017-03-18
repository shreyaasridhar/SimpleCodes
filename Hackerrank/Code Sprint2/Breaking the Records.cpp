#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,x,h=0,w=0;
    long min=100000001,max=0;
    vector<int> s;
    cin>>n;
    for (int i = 0; i < n; ++i)
    {
    	cin>>x;
    	s.push_back(x);
    	if(max<x){
    		h++;
    		max=x;
    	}
    	if (min>x){
    		w++;
    		min=x;
    	}
    }
    cout<<h<<w;
    return 0;
}
