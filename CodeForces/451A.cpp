#include <iostream>
#include <vector>
#include <stdlib.h>
using namespace std;

int main() {
	int n,m,ct=0;
	cin>>n>>m;
	for (int i = 0; i < n; i++){
    	for (int j = 0; j < m; ++j)
    	{
    		if(i==j){
    			ct+=1;
    		}
    	}
	}  
	if(ct%2==0)
		cout<<"Malvika";
	else
		cout<<"Akshat";
}