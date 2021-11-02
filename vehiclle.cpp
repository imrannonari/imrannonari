#include<iostream>
#include<cstring>
using namespace std;
 class Car{
 	private:
 		int regNo;
 		char maker[20];
 		char owner[20];
 		double price;
 	public:
 		Car(){		 }	
		Car(int r, char m[],char o[], double p){
		regNo=r;
		strcpy(maker,m);
		strcpy(owner,o);
		price=p;	
		}
		// Getter Functions
		int getRegNo(){	return regNo;	}
		char * getMaker(){return maker;	}
		char * getOwner(){return owner;		}
		double getPrice(){return price;}	
		//Setter Functions
		void setRegNo(){//regNo=r;	
			}
		void setMaker(char m[]){strcpy(maker, m);}
		void setOwner(char o[]){ strcpy(owner,o);}
		void setPrice (double p){ price=p;}
		
		void changeOwnerShip(char o[]){
			cout<<"Previous Owner "<<owner<<endl;
			strcpy(owner,o);
			cout<<"New Owner"<<owner<< endl;
		}
		
		 
 };
 
 int main(){
 	
 	Car obj[6];
 	for(int i=0;i<6;i++){
 		cout<<"Enter the data of car"<<i+1;
 		obj[i].setRegNo();
	 }
// 	obj.setRegNo(100);
// 	obj.setMaker("Honda");
// 	obj.setOwner("Ali");
// 	obj.setPrice(10000);
// 	cout<<obj.getRegNo()<<endl;
// 	cout<<obj.getMaker()<<endl;
// 	cout<<obj.getOwner()<<endl;
// 	cout<<obj.getPrice();
// 	obj.changeOwnerShip("Hamza");
 	return 0;
 }
