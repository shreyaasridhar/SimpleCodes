#include <iostream>
#include <vector>
#include <stdlib.h>
using namespace std;

int main() {
	int n,a[50],b[50],ct=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i]>>b[i];
	}
	for (int i = 0; i < n; i++){
    	for (int j = 0; j < n; ++j)
    	{
    		cout<<a[i]<<b[j]<<endl;
    		if(i==j);
    		else if(a[i]==b[j]){
    			ct+=1;
    		}
    	}
	}  
	cout<<ct;
	
}