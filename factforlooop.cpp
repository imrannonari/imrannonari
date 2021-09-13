#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int a,b=1;
 cout<<"enter the valuse for factorial :";
 cin>>a;
 /*for(a=a; a>0; a--){
 	b = b*a;

 }
 cout<<b;
 

while(a>0){
	b = b*a;
	a--;
}
cout<<b;
*/
do{
	b = b*a;
	a--;
	
}while(a>0);

cout<<b;

 getch();
}
