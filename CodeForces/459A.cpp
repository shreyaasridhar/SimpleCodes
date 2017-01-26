#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int x1,y1,x2,y2,x3,y3,x4,y4,len;
	cin>>x1>>y1>>x2>>y2;
	if(abs(x2-x1)==abs(y2-y1)){
		len=y2-y1;
		x3=x1;
		y3=y2;
		x4=x2;
		y4=y1;
	}
	else if(x2==x1){
		len=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
		x4=x2+len;
		y4=y2;
		x3=x1+len;
		y3=y1;
	}
	else if( y2==y1){
		len=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
		x4=x2;
		y4=y2+len;
		x3=x1;
		y3=y1+len;
	}
	else{
		cout<<-1; return 0;
	}
	//cout<<len;
	cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4;

	return 0;
}	
