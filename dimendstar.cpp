#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int i,j,k,l,m,n;
	for(i=1;i<=5;i++){
		for(j=i;j<=5;j++)
		{
			cout<<" ";
		}
  for(k=1;k<=i;k++){
  	cout<<" *";
		
	}
	cout<<endl;
	}
	for(l=1;l<=5;l++){
		for(m=1;m<=l;m++){
			cout<<" ";
		}
		for(n=l;n<=5;n++){
			cout<<" *";
			
		}
		cout<<endl;
		
	}
	
	
	
	getch();
	
}