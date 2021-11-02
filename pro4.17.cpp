#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int ss,mm,hh,sec;
	cout<<" Enter The Second For Calculate The Hour and  Minuts"<<endl;
	cin>>sec;
	hh=sec/3600;
	sec=sec%3600;
	mm=sec/60;
	ss=sec%60;
	cout<<" Hours = "<<hh<<endl<<" Minutsa = "<<mm<<endl<<" Seconds = "<<ss<<endl;
	return 0;
}
