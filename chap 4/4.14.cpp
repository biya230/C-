
#include<iostream>
#include<string>
using namespace std;
 main(){
	int account_number;
	float balance, total_charges, total_credits, credit_limit, new_balance;
	
	cout<<"Enter account number (or -1 to quit): ";
	cin>>account_number;
	while(account_number !=-1){
		cout<<"Enter begining balance: ";
		cin>>balance;
		cout<<"Enter total charges:";
		cin>>total_charges;
		cout<<"Enter total credits:";
		cin>>total_credits;
		cout<<"Enter credit limit:";
		cin>>credit_limit;
		new_balance=(balance+total_charges)-total_credits;//formula for new balance
        cout<<"New balance is "<<new_balance<<"\n";
        cout<<"Account:"<<account_number<<"\n";
        cout<<"Credit limit:"<<credit_limit<<"\n";
        cout<<"Balance:"<< new_balance<<"\n";
        if(credit_limit<new_balance){ //credit limit condition
        	 cout<<"credit limit Exceed";
		}
		cout<<"\n \n";
		cout<<"Enter account number (or -1 to quit): ";
	cin>>account_number;
	}
	}
	
	
		
