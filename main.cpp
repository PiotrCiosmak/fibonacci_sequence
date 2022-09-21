#include <iostream>

using namespace std;

long long int fibonacciSequence(int n);

int main()
{
    int n;
    cout << "Ktory wyraz ciagu Fibonacciego chcesz uzyskac: ";
    cin >> n;
    if (n > 0)
        cout << n << " wyraz ciagu Fibonacciego = " << fibonacciSequence(n) << endl;
    else
        cout << "Prosze podaj liczbe dodatnia" << endl;

}

long long int fibonacciSequence(int n)
{
    if (n < 3)
        return 1;
    return fibonacciSequence(n - 2) + fibonacciSequence(n - 1);
}