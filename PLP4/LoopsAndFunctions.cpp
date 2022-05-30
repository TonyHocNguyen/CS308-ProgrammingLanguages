#include <iostream>
#include <tuple>
using namespace std;

// take 2 integer inputs and multiply them
int multiply(int a, int b)
{
    int result = a * b;
    string placeholder = "ahahaha";
    // C++ wil shout at you if you return a value with a different type
    // or multiple values at a time
    // return (result, placeholder);
    return result, a, b;
}

// return multiple values workaround
// using struct
auto divide(int dividend, int divisor, string place)
{
    struct result
    {
        int quotient;
        int remainder;
        string place = place;
    };
    return result{dividend / divisor, dividend % divisor, place};
}

// // using tuple C++ 17
// std::tuple<int, int> divide(int dividend, int divisor)
// {
//     return {dividend / divisor, dividend % divisor};
// }

// input 2 different types of parameters
int add_and_print(int a, string b)
{
    int result = a + 3;
    std::cout << b << std::endl;
    return result;
}

// plain vanilla while loops
// does not return anything
void count_to_five()
{
    cout << "Count to five: "
         << "\n";
    int i = 1;
    while (i <= 5)
    {
        cout << i << "\n";
        i++;
    }
}

// do while loops
// does not return anything
void five_numbers_away(int a)
{
    do
    {
        printf("%d\n", a);
        a++;
    } while (a < a + 5);
}

// for loops using range
// get the average of the elements in the array
double get_average(int arr[], int size)
{
    int total = 0;
    for (int i = 0; i < size; ++i)
    {
        total += arr[i];
    }
    double avg = double(total) / size;
    return avg;
}

// another type of for loops
void print_arr(int (&array)[4])
{
    for (int x : array)
        std::cout << x << " ";
    std::cout << std::endl;
}

// a recursive function
int factorial(int n)
{
    if (n > 1)
    {
        return n * factorial(n - 1);
    }
    else
    {
        return 1;
    }
}

/** DRIVER PROGRAM **/
int main()
{
    // assign a function to a variable
    int result = multiply(3, 4);
    std::cout << "3 times 4 is: " << result << std::endl;

    // call a while loop function
    count_to_five();

    // call a for loop function
    int arr[] = {1, 2, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    double avg = get_average(arr, size);
    std::cout << "The average is: " << avg << std::endl;

    // call another for loop funcion to print the array
    print_arr(arr);

    // call a function with different types of parameters
    // this function has side-effects
    add_and_print(3, "Hey print this for me!");

    // returning more than 1 value using cout
    auto div_res = divide(14, 3, "Hey");
    cout << "Quotient: " << div_res.quotient << ", Remainder: " << div_res.remainder << ", Print sth:" << div_res.place << endl;

    // or use (what looks like) a tuple
    auto [quotient, remainder, place] = divide(14, 3, "Hey");
    cout << "Quotient: " << quotient << ", Remainder: " << remainder << ", Print sth:" << place << endl;

    // recursion
    int n, factorial_res;
    cout << "Enter a non-negative number: ";
    cin >> n;
    // call the recursion function
    factorial_res = factorial(n);
    cout << "Factorial of " << n << " = " << factorial_res;

    // returns nothing
    return 0;
}
