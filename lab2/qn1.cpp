#include<iostream>
using namespace std;
class largest{
	int n1,n2;
 public:	
	void getinput(){
		cout<<"enter first number"<<endl;
		cin>>n1;
		cout<<"enter second number"<<endl;
		cin>>n2;
	}
	void large(){
		if(n1>n2){
			cout<<n1<<" is largest"<<endl;
		}
		else
		    cout<<n2<<" is largest"<<endl;	
		}
	
};
int main(){
	largest t1;
	t1.getinput();
	t1.large();
}
