//3. Write a program to overload the increment ++(postfix) operator to increase no of visit of student.
#include<iostream>
using namespace std;
class student{
	private:
		int num;
		
	public:
		student(){
			num=0;
		}
		void input(){
			cout<<"enter the number of students";
			cin>>num;
		}
		student operator ++(int){
			num++;
		}
		void display(){
			cout<<"number of visits:"<<num;
		}
		
};
int main(){
	student s1;
	s1.input();
	cout<<"before increasing:"<<endl;
	s1.display();
	cout<<endl<<"after increasing:"<<endl;
	s1++;
	s1.display();
}
