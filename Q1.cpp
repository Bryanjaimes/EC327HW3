#include <iostream>
#include <cmath>
using namespace std;

double ExpTaylor(int, int);

int main()
{
    int x, n, min;
    double expTaylor;

    cout << "Enter x: ";
    cin >> x;
    cout << "Enter n: ";
    cin >> n;

    expTaylor = ExpTaylor(x, n);

    cout << "ExpTaylor result: " << expTaylor << endl;
    cout << "exp(x) result: " << exp(5) << endl;

    min = 1;
    while (exp(5) - ExpTaylor(x,min) > 0.01)
    {
        min++;
    }

    cout << "Minimum n for a difference of at most 0.01: " << min << endl;

    return 0;
}

double ExpTaylor(int x, int n)
{
    double factorial = n - 1;
    for (int i = n - 2; i > 0; i--)
    {
        factorial = factorial*i;
    }

    if (n == 1)
        return 1;
    else
    {
        return (double) pow(x,n - 1)/factorial + ExpTaylor(x, n - 1);
    }
}
