// // Write a C++ program to calculate average of 3 numbers.

// // Header files
#include <iostream>
#include <conio.h>

// // use namespace
using namespace std;

// // Main Function Start
int main()
{
    float num1, num2, num3, sum, avg;

    cout << "\nEnter 3 Numbers to Find Average => ";
    cin >> num1 >> num2 >> num3;

    sum = num1 + num2 + num3;
    avg = sum / 3;

    cout << "\nAverage => " << avg;

    cout << endl; // Add new line
    getch();
    return 0;
}
// // Main Function End
