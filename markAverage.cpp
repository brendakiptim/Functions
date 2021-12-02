// Brenda Kiptim 081315
#include <iostream>
using namespace std;

//declare function
float markAverage(float arr[7])
{
    float sum, avg = 0;
    for (int x = 0; x <= 7; x++)
    {
        sum = sum + arr[x];
    }
    avg = sum / 7;

    cout << "Average of the 7 marks is " << avg << " \n";
}

int main()
{
    //declare variables
    float arr[7];
    cout << " Welcome to our average calculator! \n";
    // loop through to get user input
    for (int x = 0; x < 7; x++)
    {
        float userInput = 0;
        cout << " Please input the " << x + 1 << " value:\n";
        cin >> userInput;
        arr[x] = userInput;
    }
    //invoke markAverage function
    markAverage(arr);
    return 0;
}