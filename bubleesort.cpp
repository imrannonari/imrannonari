#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int arr[]={3,2,6,4,9};
	//bubble sort
	int temp;
	int i,j;
	for(i=0;i<5;i++){
		cout<<arr[i]<<" ";
	}
	for(i=0;i<5;i++){
		for(j=0;j<4;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				
			}
		}
		
	}
	cout<<" after sorting data "<<endl;
	for(i=0;i<5;i++){
		cout<<arr[i]<<" ";
	}
}

