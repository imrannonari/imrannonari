#include<iostream>
#include<conio.h>
using namespace std;
int add(int , int );
int main(){
	int a,b,c;
	cout<<"Enter the value of A = ";
	cin>>a;
	cout<<endl;
	cout<<"Enter the value of B = ";
	cin>>b;
	cout<<endl;
	c=add ( a,b);
	cout<< "The sum = "<<c<<endl;
	
	getch();
}
int add(int a, int b){
	  int c;
	  //cout<< a+b<<endl;
	  c=a+b;
	  return c;
	
	
}
