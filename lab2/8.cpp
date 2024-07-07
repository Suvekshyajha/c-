/*Imagine a ticket selling booth at a fair. People passing by are requested to purchase a ticket. A
tickete is priced at rs 2.50. the booth keeps track of the number of people that have visited the
booth, and of the total amount of money collected.
Model this ticket selling booth with a class called ticketbooth including following members.
Data members: number of people visited, total amount of money collected
Member functions:

? Default constructor
? Static method to increment people who only visited, ticket is not sold 
? Static method to increment people who purchased ticket and amout
? To display all data (number of peple visited, total ticket sold, total
amount collected*/
#include<iostream>
using namespace std;
class ticketbooth{
	int np;
	static int ticket;
	static int noticket;
	char ch;
static	float totalamount;
	public:
		ticketbooth(){
			np=0;
			totalamount=0.0;
			ticket=0;
			noticket=0;
			
		}
		void getnumber(){
			cout<<"enter the number of people who visited booth"<<endl;
			cin>>np;
		}
	static void purchased(){
			ticket++;
					totalamount=ticket*2.50;;
		}
	 static	void notpurchased(){
			noticket++;
		}
		void count(){
			for(int i=0;i<np;i++){
				cout<<"was the ticket purchased?enter y or n"<<endl;
				cin>>ch;
				if(ch=='y'){
					purchased();
				}
			else
			   	notpurchased();
			}
			
		}
	void display(){
		cout<<"no of people who visited:"<<np<<endl;
		cout<<"total sold ticket:"<<ticket<<endl;
		cout<<"total amount collected:"<<totalamount<<endl;
		cout<<"number of people who visited but didnot purchase ticket:"<<noticket<<endl;
	}	
};
int ticketbooth::noticket=0;
int ticketbooth::ticket=0;
float ticketbooth::totalamount=0;
int main(){
	ticketbooth t1;
	t1.getnumber();
	t1.count();
	t1.display();
}
