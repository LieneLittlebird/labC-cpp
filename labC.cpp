/* Liene Putniņa, lr12022
C10. Given natural values a(1), a(2), ... a(n) (n<100).
Find the minimum composite (not prime) number among a.
Program created at: 2021/16.04 */

#include <iostream>
using namespace std;

// A validation function that checks, if the input is an integer
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
        else
        {
            continueLoop = false;
        }
    }

    return inputNumber;
}

/*A  function that checks, if the input is a prime numer.
If it is, it can't be a composite number. If the input is not a prime number, it is a composite number*/
bool isPrime(int n)
{
    int i, m = 0;
    m = n / 2;
    for (i = 2; i <= m; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}

/* A function finds the smallesr composite number */
void findSmallestCompositeNumber()
{
    int numberOfElements;
    bool continueLoop = true;

    /* The user enters the number of elements she/he wants to check for the smallest composite number. 
    The input needs to be an integer between 1 and 100*/
    while (continueLoop)
    {
        cout << "Please, enter the number of elements to test (positive integer between 1 and 100) \n";
        numberOfElements = getIntInput();

        if (numberOfElements > 0 && numberOfElements < 100)
        {
            continueLoop = false;
        }
    }

    int minimumCompositeNumber = 0;
    int currentNumber;
    /* The program loops through all of the input numbers.
    The inputs are validated.
    If the inputs are not between 1 and 100, an error message appears.
     */
    for (int i = 0; i < numberOfElements; i++)
    {
        bool continueCheck = true;
        while (continueCheck)
        {
            cout << "\nPlease, enter a number to test\n";
            currentNumber = getIntInput();

            if (currentNumber > 0 && currentNumber < 100)
            {
                continueCheck = false;
            }
            else
            {
                cout << "Please, enter a positive integer between 1 and 100 \n";
            }
        }

        // If the number is not prime, the program checks for the smallest composite number.
        if (!isPrime(currentNumber))
        {
            if (minimumCompositeNumber == 0 || currentNumber < minimumCompositeNumber)
            {
                minimumCompositeNumber = currentNumber;
            }
        }
    }

    // If the smallest composite number found is not 0, the result is printed on the console.
    if (minimumCompositeNumber != 0)
    {
        cout << "\nThe smallest composite number is " << minimumCompositeNumber << endl;
    }
    else
    {
        cout << "\nThe provided integers do not contain a composite number\n";
    }
}

int main()
{
    int repeatExec = 0;
    do
    {
        // The function to find the smallest composite number is called
        findSmallestCompositeNumber();

        cout << "\nEnter 1 to continue or 0 to quit:\n\n";

        repeatExec = getIntInput();

    } while (repeatExec != 0);
}