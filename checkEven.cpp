// 081315 - Brenda Kiptim
#include <iostream>
using namespace std;
//decleare function
bool CheckEven(int input)
{
    int result = input % 2;
    if (result == 0)
    {
        cout << "true\n";
    }
    else
    {
        cout << "false\n";
    }
};

int main()

{
    int num;
    cout << "Checking for even numbers";
    cout << "Please input your number?\n";
    cin >> num;
    CheckEven(num);
    return 0;
}