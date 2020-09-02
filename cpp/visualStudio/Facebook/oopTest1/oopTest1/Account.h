#ifndef ACCOUNT_H_
#define ACCOUNT_H_
class Account
{
private:
	double balance;        // Account balance
	double interestRate;   // interest rate for the period
	double interest;       // interest earned for the period
	int  transactions;     // Number of transactions

public:
	Account();
	Account(double iRate = 0.045, double bal = 0.0);
	void setInterestRate(double iRate);
	void makeDeposit(double amount);
	bool withdraw(double amount);
	void calcInterest();
	double getInterest() const;
	double getBalance() const;
	int getTransactions() const;

};

// Function prototype
void displayMenu(void);
void makeDeposit(Account&);
void withdraw(Account&);
void investsment(void);


#endif