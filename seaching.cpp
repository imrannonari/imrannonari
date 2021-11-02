#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int a[3]={11,22,33};
	int i,n,ind;
	srch:
	cout<<"enter the value for found"<<endl;
	cin>>n;
	int f=0;
	for(i=0;i<3;i++){
		if(n==a[i]){
			f=1;
			ind=i;
			break;
		
		}
	}
	if(f==1){
		cout<<" value is found "<<n<<endl;
		cout<<" the value founded index no is "<<ind<<endl;
		
	}
	else{
		cout<<"value is not found "<<endl;
	
	}
	cout<<"do you want to start again program yes->y No->n"<<endl;
	char c,y,Y;
	cin>>c;
	if(c==y){
		goto srch;
		
	}
	return 0;
}
