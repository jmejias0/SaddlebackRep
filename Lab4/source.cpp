//====================================================================
// Attached: Invoices: source.cpp, Invoices.h
//
//====================================================================
// File: source.cpp
// ===================================================================
// Programmer:  Jose Mejias
// Class: CS1B
// ===================================================================

#include "Invoices.h"

void setInvoice(Invoice& inv);
void displayInvoice(const Invoice& inv);

int main()
{
    Invoice inv_1 { 0, 0.0, false };
    Invoice inv_2 { 0, 0.0, false };

    setInvoice(inv_1);
    setInvoice(inv_2);

    system("cls");

    displayInvoice(inv_1);
    displayInvoice(inv_2);

    system("pause");

    return 0;   
}


//========= setInvoice ===============================================
// This function prompts the user to enter information about an 
// invoice, the invoice number, amount and wheter or not has been paid
//====================================================================
void setInvoice(Invoice& inv) 
{
    cout << "Enter the invoice:" << endl;
    cout << "INVOICE#: ";
    cin >> inv.invoiceNum;
    cout << "AMOUNT: ";
    cin >> inv.amt;
    cout << "PAID (y/n): ";
    cin >> inv.paid;
    if (inv.paid = 'y')
    {
        cout << "PAID";
        return;
    }
    else
    {
        cout << "Not Paid";
        return;
    }
    
    cout << endl;

}
//====================================================================



//========= displayInvoice ===========================================
// This function display the information about the invoice
//====================================================================
void displayInvoice(const Invoice& inv)
{   
    cout << "---- Invoice Summary ----" << endl;
    cout << "INVOICE: " << inv.invoiceNum << endl;
    cout << "AMOUNT: " << inv.amt << endl;
    cout << "PAID: " << inv.paid << endl;
    
}
//====================================================================

