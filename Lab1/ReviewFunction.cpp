//====================================================================
// Attached: Lab #1
//
//====================================================================
// File: Review Functions
// ===================================================================
// Programmer:  Jose Mejias
// Class: CS1B
// ===================================================================

#include <iostream>
#include <iomanip>
using namespace std;

//Function prototypes
double getBalance();
double getDeposit();
double CalcNewBalance(double balance, double deposit);
void displayBalance(double deposit, double newBalance);

int main()
{
    double balance;
    double deposit;
    double newBalance;

    balance = getBalance();
    deposit = getDeposit();
    newBalance = CalcNewBalance(balance, deposit);
    displayBalance(deposit, newBalance);

    return 0;
}

//===== getBalance ===================================================
// This function prompts the user to enter the bank balance.
//====================================================================
// Input:
//      balance - an integer value, representig the bank balance
// Output:
//      balance - A value representing the bank balance
//====================================================================
double getBalance()
{
    double balance = 0.0;

    cout << "Enter your bank balance: ";
    cin >> balance;

    return balance;
}
//====================================================================



// ===== getDeposit ===================================================
// This function prompts the user to enter the deposit amount.
//=====================================================================
//Input:
//     deposit - an integer value, representig the deposit amount.
//Output:
//     deposit - A value representing the deposit amount.
//====================================================================
double getDeposit()
{
    double deposit = 0.0;

    cout << "Enter the deposit amount: ";
    cin >> deposit;

    return deposit;
}
//====================================================================



//===== CalcNewBalance ===============================================
// This function calculates the new balance by adding the balance and
// the deposit amount.
//====================================================================
// Input:
//     balance - an integer value, representig the bank balance
//     deposit - an integer value, representig the deposit amount.
// Output:
//     newBalance - A value representing the new balance.
//====================================================================
double CalcNewBalance(double balance, double deposit)
{
    double newBalance = 0.0;
    
    // Add the balance and the deposit amount 
    newBalance = balance + deposit;

    return newBalance;
}
//====================================================================



//===== displayBalance ===============================================
// This function displays the new bank balance.
//====================================================================
void displayBalance(double deposit, double newBalance)
{
    cout << fixed << setprecision(2);
    cout << "With a deposit of $" << deposit << ", your new balance is $" 
         << newBalance << endl;
}
//====================================================================