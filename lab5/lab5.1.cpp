/*Create a class Fmachine. From this class derive the classes Aero-
plane with attribution code, name and capacity. Both these classes
have getdata() &amp; putdata() to take input and display data. Here class
Fmachine should be made abstract base class. Write main function
in which one pointer object of class Aeroplane is created to call
function. Use the concept of dynamic binding and dynamic memory
management concept.*/
#include<iostream>
#include<string>
using namespace std;
class fmachine{
	public:
	virtual void getdata()=0;
	virtual void putdata()=0;
	virtual ~fmachine() {}
};

class aeroplane:public fmachine{
	int code;
	string name;
	int capacity;
	public:
		void getdata(){
			cout<<"enter the code of the plane"<<endl;
			cin>>code;
			cout<<"enter name "<<endl;
			cin>>name;
			cout<<"enter capacity"<<endl;
			cin>>capacity;
		}
	void putdata(){
			cout<<"code:"<<code<<endl<<" name:"<<name<<endl<<"capapcity:"<<capacity<<endl;
		}
};
int main(){
	fmachine* f1 = new aeroplane();

	f1->getdata();
	f1->putdata();
	delete f1;
}
