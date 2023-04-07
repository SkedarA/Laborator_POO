#pragma once

#include "BankAccount.h"

ref class SavingsAccount : BankAccount {
private:
	static double interestRate;

public:
	SavingsAccount(String^ holder);
	static void SetInterestRate(double rate);
	static double GetInterestRate();

	virtual bool CanDebit(double amount) override;
};