#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main(){
	int roll = 12309;
	char name[20]=" imran hussain";
	char clas[20]=" MSC IT";
	char reg[200]= " 2016-GCUF-07709";
	cout<<"   "<<setw(15)<<setfill('$')<<name<<endl;
	cout<<"   "<<setw(6)<<setfill('@')<<roll<<endl;
	cout<<"   "<<setw(10)<<setfill('$')<<clas<<endl;
	cout<<"   "<<setw(20)<<setfill('!')<<reg<<endl;
	getch();
}
