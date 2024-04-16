//Bank Account Inheritance:
//Problem Statement: Design a system for managing bank accounts. Create a base class 
//BankAccount with attributes like account number and balance. Derive classes like 
//SavingsAccount and CheckingAccount, each with specialized methods like withdraw() and calculate_interest().
#include<iostream>
#include<string.h>
using namespace std;
 class BankAccount 
 {
 	protected:
 		int accountno;
 		int balance;
 		
 		public:
 		BankAccount()
 		{
 		accountno=10000;
		balance=10;	
		}
	
		BankAccount(int accountno,int balance)
		{
			this->accountno=accountno;
			this->balance=balance;
		}
	virtual	void display()
		{
			cout<<"accountno:"<<accountno<<" balance:"<<balance<<endl;
		}
		
	};
	
class SavingAcc:public BankAccount
{
	private:
		double principleAmt;
		int rate;
		double interest;
		
	public:
		SavingAcc()
		{
			principleAmt=1500;
			rate=0;
		}
		SavingAcc(int accountno,int balance,double principleAmt,int rate):BankAccount(accountno,balance)
		{
			this->principleAmt=principleAmt;
			this->rate=rate;
		}
		
		int calInterest()
		{
			 interest=principleAmt*rate;
			 cout<<"Interest in saving account is: "<<interest<<endl;
		}
		
		void display()
		{   
		    BankAccount::display();
			cout<<"Principle amount: "<<principleAmt<<" Rate:"<<rate<<"  Interest: "<<interest<<endl;
		}
		
};
class CheckingAcc: public BankAccount
{
	private:
		int transferMoney;
		double moneyafterWithdraw;
	
	public:
	CheckingAcc()
	{
		transferMoney=500;
	}
	CheckingAcc(int accountno,int balance,int transferMoney):BankAccount(accountno,balance)
	{
		this->transferMoney=transferMoney;
		//this->moneyafterWithdraw=moneyafterWithdraw;
	}
	
	void withdraw()
	{   
	     moneyafterWithdraw= balance-transferMoney; 
		cout<<"Money after Withdraw:"<<moneyafterWithdraw<<endl;
	}
	void display()
		{   
		    BankAccount::display();
			cout<<" transferMoney: "<<transferMoney<<" moneyafterWithdraw:"<<moneyafterWithdraw<<endl;
		}	
	
};

int main56()
{ 
    BankAccount b(654641,100000);
    b.display();
    cout<<"\n--------------"<<endl;
    SavingAcc s(884643,20000,54554,5);
    s.display();
    cout<<"\n--------------"<<endl;
    CheckingAcc c(986568,25000,4600);
    c.withdraw();
    c.display();
    
    
	
}
