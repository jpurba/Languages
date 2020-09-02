#include <iostream>
#include "Account.h"

using namespace std;


Account::Account()
{
	cout << "Default constructor\n";
	balance = 0.0;
	interestRate = 0.0;
	interest = 0.0;
	transactions = 0;
}

Account::Account(double iRate, double bal)
{
	cout << "Constructor with passing parameter \n";
	balance = bal;
	interestRate = iRate;
	interest = 0.0;
	transactions = 0;
}

void Account::setInterestRate(double iRate)
{
	interestRate = iRate;
}

void Account::makeDeposit(double amount)
{
	balance += amount;
	transactions++;
}

bool Account::withdraw(double amount)
{
	if (balance < amount)
		return false; // Not enough in the account
	else
	{
		balance -= amount;
		transactions++;
		return true;
	}
}
void Account::calcInterest()
{
	interest = balance * interestRate;
	balance += interest;
}

double Account::getInterest() const
{
	return interestRate;
}

double Account::getBalance() const
{
	return balance;
}

int Account::getTransactions() const
{
	return transactions;
}