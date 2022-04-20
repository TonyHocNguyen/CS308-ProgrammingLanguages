#include <iostream>
#include <inttypes.h>
using namespace std;
template <typename T>

constexpr const char *sign(const T &x)
{
    const char *result{};
    if (x == 0)
    {
        result = "zero";
    }
    else if (x > 0)
    {
        result = "positive";
    }
    else
    {
        result = "negative";
    }
    return result;
}

int main()
{
    printf("float 100 is %s\n", sign(100.0f));
    printf("int -100 is %s\n", sign(-100));
    printf("char 0 is %s\n", sign(char{}));

    int x = 1, y = 1, z = 1;

    // A one condition if/else statement
    if (1 == 1)
    {
        printf("Hey you got the first condition\n");
    }

    // A multi-condition if/else statement
    if (1 != 0 && 1 <= 2)
    {
        printf("Is this too easy?\n");
    }

    // if/elif/else statement
    if (x == y)
    {
        cout << "Well obviously?" << endl;
    }
    else if (y <= x)
    {
        cout << "Not gonna happen" << endl;
    }
    else
    {
        cout << "Guess this is the end of the line" << endl;
    }

    // Short-circuit logic

    // Short-circuit using logical "||"(OR)
    // a and b are equal so we can skip c
    if (x == y || z++)
    {
        cout << "Value of 'c' will"
             << " not increment due"
             << " to short-circuit"
             << endl;
    }
    else
    {
        cout << "Value of 'c' "
             << " is incremented as there"
             << " is no short-circuit"
             << endl;
    }

    // Short-circuit using logical "&&"(OR)
    // a and b are equal but still have to increment c
    if (x == y && z++)
    {
        cout << "Value of 'c' will"
             << " increment as there"
             << " is no short circuit"
             << endl;
    }
    else
    {
        cout << "Value of 'c' will"
             << " not increment due to short circuit"
             << endl;
    }

    // A switch statement
    char oper;
    float num1, num2;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> oper;
    cout << "Enter two floats: " << endl;
    cin >> num1 >> num2;

    switch (oper)
    {
    case '+':
        cout << num1 << " + " << num2 << " = " << num1 + num2 << "\n";
        break;
        // continue; //Huge reg flag!!!
    case '-':
        cout << num1 << " - " << num2 << " = " << num1 - num2 << "\n";
        break;
        // continue; //Huge reg flag!!!
    case '*':
        cout << num1 << " * " << num2 << " = " << num1 * num2 << "\n";
        break;
        // continue; //Huge reg flag!!!
    case '/':
        cout << num1 << " / " << num2 << " = " << num1 / num2 << "\n";
        break;
        // continue; //Huge reg flag!!!
    default:
        // operator is doesn't match any case constant (+, -, *, /)
        cout << "Error! The operator is not correct"
             << "\n";
        break;
        // continue; //Huge reg flag!!!
    }

    // Dangling else problem
    // This programmer is horrible with indentation.
    if (x <= y)
    if (x != 1)
    printf("I am DANGLING!!!\n");
    else
    printf("Am I DANGLING???\n");
    printf("Definitely dangling!!!\n");

    return 0;
}