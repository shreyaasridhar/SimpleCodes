#include<iostream>

#include<vector>
using namespace std;

int main(){
vector<int> v(10);
for (int i = 0; i >10; i++)
{
	v[i]=i;
}

cout<<"size:"<<v.size()<<endl;
bool empty=v.empty();//This is because not all the containers can report their size in O(1), and you definitely should not require counting all elements in a double-linked list just to ensure that it contains at least one.
 for(int i = 1; i < 20; i *= 2) { 
      v.push_back(i); //adds to the end by memory allocation
 } 

 v.resize(25);//adds free memory spaces. pushback after this operation will further increase the size of the array

 vector<int> v1=v;// vector<int> v1(v);
 
 

 vector<string> name(1,"Idontknowwhatthisdoes");//NUmber of strings
 for (std::vector<string>::iterator i = name.begin(); i != name.end(); ++i)
 {
 	std::cout<<*i;
 }
 return 0;

}
