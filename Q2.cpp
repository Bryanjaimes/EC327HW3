#include <iostream>
#include <ctime>
#include <cmath>
#include <math.h>
#include <stdlib.h>
#include <sstream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
    int guess, lotterynum;
    bool correctguess = 0, validguess;

    cout << "Welcome to EC327-Lottery!" << endl;

    while(correctguess == 0)
    {
        validguess = 1;
        srand(time(0));
        lotterynum = rand() % 20;

        cout << "Please enter a number between 0-19: ";

        cin >> guess;

        if (guess == lotterynum)
        {
            correctguess = 1;
            cout << "CONGRATULATIONS!" << endl;
        }
        else if (guess < 0 || guess > 19)
        {
            validguess = 0;
            cout << "You need to enter a number between 0-19.\n" << endl;
        }
        else if ( ((guess % 10) == (lotterynum % 10)) || ((guess == 1) && (lotterynum == 1)) || ((guess > 9) && (lotterynum > 9)) || ((guess == 1) && (lotterynum > 9))  || ((lotterynum == 1) && (guess > 9)) ) 
        {
            cout << "Partial Award!" << endl;
            correctguess = 1;
        }
        if (validguess)
        {
            cout << "The correct number is " << lotterynum << ", you guessed " << guess << ".\n" << endl; 
        }
    }

    return 0 ;
}
