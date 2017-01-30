#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	char a[n];
	for (int i = 0; i < n; ++i)	cin>>a[i];
	for (int i = 0; i < n;){
		if (a[i]=='o' && a[i+1]=='g' && a[i+2]=='o'){
			cout<<"***";
			i+=3;
			while(a[i]=='g' && a[i+1]=='o')	i+=2;
		}
		else{
			cout<<a[i];
			++i;
		}
	}
	return 0;
}