/*Create a class temperature with the member function getdata() and display() with required
data to change the temperature given in Fahrenheit to Celsius.*/
#include<iostream>
using namespace std;
class temperature{
	float c=0.0,f=0.0;
	
public:
	void getdata(){
		cout<<"enter the temperature in fahrenhiet.enter a value between 32 to 212"<<endl;
		cin>>f;
		if(f>213 || f<33){
			cout<<"your value should be between 32 and 212 reenter the value"<<endl;
			cin>>f;
		}
	}
	void display(){
		cout<<"before conversion "<<f<<" degree fahrenheit"<<endl;
		c=(f-32.0)*5.0/9.0;
		cout<<"after conversion: "<<c<<" degree celsious"<<endl;
	}
	
};
int main(){
	temperature t1;
	t1.getdata();
	t1.display();
}
