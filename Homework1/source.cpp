//====================================================================
// Attached: HW_1a
//
//====================================================================
// File: HW-1a
// ===================================================================
// Programmer:  Jose Mejias
// Class: CS1B
// ===================================================================

#include <iostream>
#include <iomanip>
using namespace std;

// Function Prototypes
double getSalesAmt();
double calcCommission(double sales);
double calcPay(double commission);
void displayPay(double sales, int basePay, double commission, double pay);

// ====== main =======================================================
//
// ===================================================================
int main()
{
    double sales = 0.0;
    double commission = 0.0;
    double pay = 0.0;
    int basePay = 2500.0;
    char again;
    
    do
    {
    sales = getSalesAmt();                          // Function call
    commission = calcCommission(sales);             // Function call
    pay = calcPay(commission);                      // Function call
    displayPay(sales, basePay, commission, pay);    // Function call
    cout << "Do it again? (Y/N): ";
    cin >> again;
    } while (again == 'Y' || again == 'y');

    return 0;
}

// ===== getSalesAmt =================================================
// This function prompts the user to enter a monthly sales amount then
//  returns the value to main.
//
// Input:
//      Sales   -   A value, representing the monthly sales.
//Output:
//      Sales   -   Same value as input.
//====================================================================
double getSalesAmt()
{
    double sales = 0.0;

    // Prompt the user to enter the monthly sales amount
    cout << fixed << showpoint << setprecision(2);
    cout << "Enter the monthly sales amount: ";
    cin >> sales;

    // Return the value to main
    return sales;
}
//====================================================================



//====== calcCommission ==============================================
// This function calculates the commission based on the sales amount
// in the month.
//
// Input:
//      sales   -   A value representing the monthly sales.
// Output:
//       commission - The commission of the sales amount.
//====================================================================
double calcCommission(double sales)
{
    double commission = 0.0;

    // If the sales person sells more than $50,000 per month, the
    // commission is 2% of the sales amount.
    if (sales >= 50000)
    {
        commission = (sales * 0.02);
    }
    //If the sales are between $25,000 and $50,000, then the
    // comission is 1.5% of the sales amount.
    else if (sales > 25000 && sales < 50000)
    {
        commission = (sales * 0.015);
    }
    // If the sales are less than $25,000, there is no commission.
    else
    {
        commission = 0.0;
    }
    
    // Return the value to main
    return commission;

}
//====================================================================


//====== calcPay =====================================================
// This function calculates the total monthly pay for a salesperson.
//
// Input:
//     commission - The commission of the sales amount.
// Output:
//       pay     - The total monthly pay for the salesperson.
//====================================================================
double calcPay(double commission)
{
    double pay = 0.0;

    // A sales person gets a monthly salary of $2,500 plus commission,
    // if the person as earned a commission.
    pay = 2500 + commission;

    // Return the value to main
    return pay;
}
//====================================================================


//====== displayPay ==================================================
// This function displays the total monthly pay for a salesperson.
//
//====================================================================
void displayPay(double sales, int basePay, double commission, double pay)
{
    cout << "Monthly Sales:" << left << setw(10) << "\t$\t" << sales << endl;
    cout << "The commission:" << left << setw(10) << "\t$\t" << commission << endl;
    cout << "Base pay:" << left << setw(10) << "\t$\t" << basePay << endl;
    cout << "The total pay:" << left << setw(10) << "\t$\t" << pay << endl;
}
//====================================================================