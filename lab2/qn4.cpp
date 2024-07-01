/*Create a class named time with required data members and member functions to display the
time format in HHH:MM: SS after adding two time period given by user.*/
#include<iostream>
using namespace std;
class time{
	int hr,min,ss;
public:
void getinput(){
	cout<<"enter hour:"<<endl;
	cin>>hr;
	cout<<"enter minutes:"<<endl;
	cin>>min;
	cout<<"enter seconds:"<<endl;
	cin>>ss;
}
void add(time t){
	ss=ss+t.ss;
	min += ss / 60; 
        ss = ss % 60;
	min=min+t.min;
	hr=hr+ss/60;
	min=min%60;
	hr=hr+t.hr;
}	
void display(){
	cout<<hr<<":"<<min<<":"<<ss;
}
};
int main(){
	time t1,t2;
	cout<<"first input"<<endl;
	t1.getinput();
	cout<<"for second input"<<endl;
	t2.getinput();
	t1.add(t2);
	t1.display();
	
}
