#include <iostream>
using namespace std;
int  linearSearch(int arr[],int size,int key){
	for(int i=0;i<size;i++)
		if(arr[i]==key)
			return 1;
		
		
	
	return -1;
}
int main(){
	int arr[5]{86,91,34,50,0};
	int key;
	cin>>key;
	if(linearSearch(arr,5,key)==1){
		cout<<"Search Found...";
	}else{
		cout<<"No Search Found...";
	}
	return 0;
}
