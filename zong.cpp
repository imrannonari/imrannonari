#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int help,lang,s,cb;
	cout<<"Enter the valid help line of zong"<<endl;
	cin>>help;
	if(help==310){
		 cout<<" "<< "Select the languages"<<endl;
		 cout<<" "<< "1-English"<<endl<<" "<< "2-Urdu"<<endl<<" "<< "3-Chines"<<endl;
		 cin>>lang;
		 if(lang==1){
		 	cout<<" "<<"Your Languages is English "<<endl;
		 	cout<<" "<<"Select the bundles"<<endl;
		 	cout<<" "<<"1-Top Bundles"<<endl<<" "<<"2-internet Bundles"<<endl<<" "<<"3-Hybird Bundles"
		 	<<endl<<" "<<"4-Call Bundles"<<endl<<" "<<"5-SMS Bundles"
		 	<<endl<<" "<<"6-Post paid"<<endl<<" "<<"7-international"
		 	<<endl<<" "<<"8-Regular offer"<<endl<<" "<<"9-My Account"
		 	<<endl<<" "<<"10-Budget base"<<endl;
		 	cin>>s;
		 	cb=s;
		 	while(cb<=10){
		 		switch(cb){
		 		case 1:
		 			cout<<" "<<"1-Whats App offer"<<endl;
		 			break;
		 		case 2:
		 			cout<<" "<<"2-supper weekly offer"<<endl;
		 			break;
		 		case 3:
		 			cout<<" "<<"3-super weekly max"<<endl;
		 			break;	
		 			
		 		}
				cb+10;
			 }
		 	
		 }
		 else if(lang==2){
		 	cout<<" "<<"Your Languages is Urdu"<<endl; 
		 }
		 else if(lang==3){
		 	cout<<" "<<"Your Language is Chines "<<endl;
		 }
		 else{
		 	cout<<" "<<"Select the Suported Language"<<endl;
		 }
		 
		
	}
	else{
		cout<<" "<<"connection error"<<endl;
	}
}
