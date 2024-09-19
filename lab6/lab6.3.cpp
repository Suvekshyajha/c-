//Create template to find minimum value in an array for different datatype.
#include<iostream>
using namespace std;
template <typename t>
t minimum(t min[],int n){
	t res=min[0];
	
    for(int i=0;i<n;i++){
    	cout<<"enter element at index "<<i+1<<endl;
    	cin>>min[i];
    	if(min[i]<res){
    		res=min[i];
		}
	}
	cout<<"the minimum value is "<<res<<endl;
	
}
int main(){
	int j;
	cout<<"for int"<<endl;
	cout<<"enter the index "<<endl;
	cin>>j;
	int intarr[j];
	minimum<int>(intarr,j);
	cout<<"for float"<<endl;
	cout<<"enter the index "<<endl;
	cin>>j;
	float floatarr[j];
	minimum<float>(floatarr,j);
}

