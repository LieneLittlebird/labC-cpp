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
        else if (inputNumber < 0)
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

// int main()
// {
//     int num;
//     int i;
//     int count = 0;

//     cin >> num;
//     for (i = 1; i <= num; i++)
//     {
//         if (num % i == 0)
//             count++;
//     }

//     if (count > 2)
//         cout << num << " is a composite number";
//     else
//         cout << num << " is not a composite number";

//     return 0;
// }

/* 
1. A loop that finds the composite numbers
2. A loop that finds the smallest composit number
*/

int smallestCompositeNumber()
{

    int count = 0;
    int num;
    int n;
    int compNum;
    // Is compNum an array?
    int minCompNum;
    cout << "Enter the number of elements: \n";
    cin >> count;
    cout << "Enter " << count << " numbers: \n";

    for (int i = 1; i < count; i++)
    {
        cin >> num;

        if (num % i == 0)
        {
            compNum++;
        }

        if (compNum > 2)
        {
            // do something
        }
    }

    cout << "The composite numbers are " << compNum;
    // Are they (?)

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