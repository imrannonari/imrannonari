#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main(){
	int b=150,s=100,p=450,f=120;
	cout<<"b=burger "<<"s=sendwich "<<"p=pizza "<<"f=fri"<<endl;
	cout<<"burger = 150Rs "<<"sendwich = 100Rs "<<"pizza = 450Rs "<<"fri = 120Rs"<<endl;
	int no,bchg,pchg,schg,fchg,tchg;
	char item;
	cout<<"enter the item b,s,p,f"<<endl;
	cin>>item;
	switch(item){
		case'b':
			cout<<"enter the how many burger you buy "<<endl;
			cin>>no;
			bchg=b*no;
			//cout<<"total burger charge="<<bchg<<endl;
		
		case's':
			cout<<"enter how many sendwich you buy "<<endl;
			cin>>no;
			schg=s*no;
			//cout<<"total sendwich charge="<<schg<<endl;
			
		case'p':
			cout<<"enter how many pizza you buy "<<endl;
			cin>>no;
			pchg=p*no;
			//cout<<"total pizza charge="<<bchg<<endl;
		case'f':
			cout<<"enter how many fricheckis you buy "<<endl;
			cin>>no;
			f chg=f*no;
			break;
		//cout<<"total fri charge="<<bchg<<endl;
		default:
			cout<<"sorry your item is not available in this menu  "<<endl;
		}
		tchg = schg+pchg+fchg+bchg;
		cout<<"your total charge is="<<tchg<<endl;
		
	getch();
	
}
