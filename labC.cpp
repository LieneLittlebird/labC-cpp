/* Liene Putniņa, lr12022
C10. Given natural values a(1), a(2), ... a(n) (n<100).
Find the minimum composite (not prime) number among a.
Program created at: 2021/16.04 */

#include <iostream>
using namespace std;

int getIntInput()
{
    int inputNumber;
    bool continueLoop = true;
    while (continueLoop)
    {
        cin >> inputNumber;
        if (cin.fail())
        {
            cout << "Invalid input. Please, enter an integer\n";
            cin.clear();
            cin.ignore(256, '\n');
        }
        else if (inputNumber <= 0)
        {
            cout << "Please, enter a positive non-zero integer\n";
        }
        else if (inputNumber > 100)
        {
            cout << "Please, enter a positive integer between 1 and 100 \n";
        }
        else
        {
            continueLoop = false;
        }
    }

    return inputNumber;
}

int smallestCompositeNumber()
{

    int count = 0;
    int inputNumber;
    int noRemainder;
    int compNum;
    int minCompNum;
    cout << "Enter the number of elements: \n";
    cin >> count;
    cout << "Enter " << count << " numbers: \n";

    for (int i = 0; i < count; ++i)
    {
        cin >> inputNumber;

        if (inputNumber % i == 0)
        {
            noRemainder++;
        }

        if (noRemainder > 2)
        {
            compNum++; //smth else here
        }
        if (inputNumber < minCompNum)
        {
            minCompNum = inputNumber;
        }
        else if (minCompNum == inputNumber)
        {
            //smth happens
            compNum++;
        }
    }

    cout << "The smallest composite number is " << minCompNum;
    ;

    return 0;
}

int main()
{
    int repeatExec = 0;
    do
    {
        smallestCompositeNumber();

        cout << "\nEnter 1 to continue or 0 to quit:\n"
             << endl;
        cin >> repeatExec;
        // repeatExec = getIntInput();

    } while (repeatExec == 1);
}