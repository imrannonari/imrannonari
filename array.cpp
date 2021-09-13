#include<iostream>
using namespace std;
int main(){
//	int ary[5];
//	int i;
//	cout<<" Enter the values of 5 index of array"<<endl;
//	for(i=0;i<5;i++){
//		cout<<"Enter the value of index["<<i<<"]";
//		cin>>ary[i];
//	
//	}
//	for(i=0;i<5;i++){
//		cout<<"the value of index["<<i<<"]"<<ary[i]<<endl;
//	}
	int ar[2][2];
	int j,k;
	for(j=0;j<2;j++){
		for(k=0;k<2;k++){
			cout<<"Enter the value of index["<<j<<"]["<<k<<"]";
			cin>>ar[j][k];
		}
	}
	for(j=0;j<2;j++){
		for(k=0;k<2;k++){
			cout<<" "<<ar[j][k];
			
		}
		cout<<endl;
	}
	
}
