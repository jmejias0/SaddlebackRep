#include <iostream>
#include <string>
#include <ctime>
using namespace std;

long long int fib(int n);

int main()
{
    int n = 47 
    cd Function;
    clock_t start;
    clock_t end;

    start = clock();

    cout << "fib(" << n << ") = " << fib(n) << "." << endl << endl;
    
    end = clock();

    cout << "Time equals " << (end - start) / CLK_TCK  << " seconds .\n";

    cout << endl << endl;
    return 0;
}
//----------------------------------------------------------------
long long int fib(int n)
{
    // base case (code that stops the recursion)
     if (n == 1 || n == 2)
     {
        return 1;
     }

    // Recursive case
    return fib(n - 1) + fib(n - 2);
}
/*================================================================

8 am
12 pm

12 - 8 = 4 hours

================================================================*/