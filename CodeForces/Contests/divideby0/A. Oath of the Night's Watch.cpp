#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	int n,x,flag1=0,flag2=0,ct=0;
	vector<int> ste;
	cin>>n;
	for (int i = 0; i < n; ++i){
		cin>>x;
		ste.push_back(x);
	}
	sort(ste.begin(),ste.end());
	for (int i = 0; i < n; ++i){
		for (int j = 0; j< n; ++j){
			if(ste[j]>ste[i]) flag1=1;
			if(ste[j]<ste[i]) flag2=1;
		}
		if(flag2!=0 && flag1!=0) ct++;
		flag1=0;flag2=0;
	}
	cout<<ct;
	return 0;
 }
