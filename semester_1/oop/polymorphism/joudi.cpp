#include <iostream>
using namespace std;
int main()
{
    string userInput;
    int checkBreak = 0;
    cout << "Enter a value" << endl;
    for(;;){
        cout << "Hello " << endl;
    }
    while (1)
    {
        cin >> userInput;
        cout << userInput << endl;
        if (userInput != "0")
            checkBreak = 0;
        if (userInput == "0")
            checkBreak++;
        if (userInput == "000" || checkBreak == 3)
            break;
    }
    return 0;
}