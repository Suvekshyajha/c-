/*Create a class named feet with required data members and member function to add two lengths
given by user in feet and inches.*/
/*Create a class named feet with required data members and member function to add two lengths
given by user in feet and inches.*/
#include<iostream>
using namespace std;
class feet{
	int ft,in;
public:
void getinput(){
	cout<<"enter feet:"<<endl;
	cin>>ft;
	cout<<"enter inches:"<<endl;
	cin>>in;
	
}
void add(feet t){
	in=in+t.in;
	ft += in / 12; 
        in = in % 12;
	
	ft=ft+t.ft;
}	
void display(){
	cout<<ft<<" and "<<in<<endl;
}
};
int main(){
	feet t1,t2;
	cout<<"first input"<<endl;
	t1.getinput();
	cout<<"for second input"<<endl;
	t2.getinput();
	t1.add(t2);
	t1.display();
	
}
