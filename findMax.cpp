// 081315 Brenda kiptim
#include <iostream>
using namespace std;

//declare function thst gets max value
double max(double num1, double num2, double num3)
{
    if (num1 >= num2)
    {
        if (num1 >= num3)
        {
            return num1;
        }
        else if (num3 >= num1)
        {
            return num3;
        }
        else
        {
            cout << "Error please try again";
        }
    }
    else if (num2 > num1)
    {
        if (num2 >= num3)
        {
            return num2;
        }
        else if (num3 >= num2)
        {
            return num3;
        }
        else
        {
            cout << "Error please try again";
        }
    }
}
int main()

{
    //declare variables
    int userInput1, userInput2, userInput3, ans;

    cout << "Hey! Please input three number to get the largest of the three\n";
    cout << "Input No 1\n";
    cin >> userInput1;
    cout << "Input No 2\n";
    cin >> userInput2;
    cout << "Input No 3\n";
    cin >> userInput3;

    //call function with user inputs
    ans = max(userInput1, userInput2, userInput3);
    cout << "The max value is " << ans << " \n";

    return 0;
}