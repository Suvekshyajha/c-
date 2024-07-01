/*Write a program according to the specification given below:
? Create a class Account with data members acc no, balance, and min_balance(static)
? Include methods for reading and displaying values of objects
? Define static member function to display min_balance 
? Create array of objects to store data of 5 accounts and read and display values of each
object*/
#include<iostream>
using namespace std;
class Account{
	long int acc_no;
	long int balance;
	public:
		static int min_balance;
		void read(){
			cout<<"enter account number"<<endl;
			cin>>acc_no;
			cout<<"enter your balance"<<endl;
			cin>>balance;
		}
		void display(){
			cout<<"account number:"<<acc_no<<endl;
			cout<<"balance:"<<balance<<endl;
			
		}
		static void minbalance(){
			cout<<"minimum balance is"<<min_balance<<endl;
		}
		
};
int Account::min_balance=1;
int main(){
	Account a[5];
	int i;
	for(i=0;i<5;i++){
		a[i].read();
		
	}
	Account minbalance;
	for(i=0;i<5;i++){
		
		a[i].display();
		
	}
}
