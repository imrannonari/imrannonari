#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int tpb,tpr,prd,day,pgr;
	cout<<"Enter The Total Pages of Book"<<endl;
	cin>>tpb;
	cout<<"Enter The Pages Read per day"<<endl;
	cin>>prd;
	cout<<"How many days read the book"<<endl;
	cin>>day;
	tpr=prd*day;
	pgr=tpb-tpr;
	cout<<"Total pages of book"<<tpb<<endl<<"Total pages reads"<<tpr<<endl
	<<"Pages remaining for reading of book"<<pgr<<endl;
			
	return 0;
}
