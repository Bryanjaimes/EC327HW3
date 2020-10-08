#include <iostream>
#include <cmath>
using namespace std;

double guessSqrt(double num);

int main()
{
    double num, guess;

    cout << "Enter a positive number: ";
    cin >> num;

    guess = guessSqrt(num);

    cout << "The absolute difference between the correct square root and the function's result is " << fabs(sqrt(num) - guess) << endl;

    return 0;
}

double guessSqrt(double num)
{
    double lastGuess = 1;
    double nextGuess = ((lastGuess + (num / lastGuess)) / 2);
    while (fabs(nextGuess - lastGuess) > 0.001)
    {
        lastGuess = nextGuess;
        nextGuess = ((lastGuess + (num / lastGuess)) / 2);
    }
    return nextGuess;
}