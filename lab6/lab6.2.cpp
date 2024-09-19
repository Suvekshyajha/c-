//Write a program to define a function template for summing an array of an integer and floating numbers
#include<iostream>
using namespace std;
template <typename t>
t sum(t add[],int n){
	t res=0;
	
    for(int i=0;i<n;i++){
    	cout<<"enter element at index "<<i+1<<endl;
    	cin>>add[i];
    	res+=add[i];
	}
	cout<<"the sum is "<<res<<endl;
	
}
int main(){
	int j;
	cout<<"for int"<<endl;
	cout<<"enter the index "<<endl;
	cin>>j;
	int intarr[j];
	sum<int>(intarr,j);
	cout<<"for float"<<endl;
	cout<<"enter the index "<<endl;
	cin>>j;
	float floatarr[j];
	sum<float>(floatarr,j);
}

