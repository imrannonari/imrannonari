#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int hrs,d,w;
	cout<<"Enter Ther Hourse for Weeks days and hours"<<endl;
	cin>>hrs;
	w=hrs/168;
	hrs=hrs%168;
	d=hrs/24;
	hrs=hrs%24;
	cout<<" Weeks = "<<w<<endl<<" Days = "<<d<<endl<<"hourse = "<<hrs<<endl;
	
	return 0;
}
