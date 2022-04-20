#include <iostream>
#include <inttypes.h>
using namespace std;

// A function to print integers
// Function naming convention:
void print_int(int x) {
    cout << "The integer is: " << x << "\n";
}

// A function to print doubles
void print_double(double x) {
    cout << "The double is: " << x << "\n";
}

int main() {
    short s1 = 01234; // initialize
    printf(""); // printing with a format specifier

    unsigned short us1 = 0b10101010; //initialize
    printf("%hu \n", us1); // printing with a format specifier "%hu"

    // 3 ways of initializing an integer
    int i1 = 3.4; // this would round the double to an integer
    int i2 {3};
    int i3 = {5}; // = is not necessary when using {}
    // int i2 {3.4}; // errors
    // int i3 = {3.4}; // errors
    printf("%d, %d, %d \n", i1, i2, i3); // printing with a format specifier
    print_int(i1); // or use a print function

    unsigned int si1 = 0xff; // initialize
    printf("%u \n", si1); // printing with a format specifier

    long l1 = -1235121; // initialize
    printf("%ld \n", l1 + i1); // printing with a format specifier

    unsigned long ul1 = 1241354; // initialize
    printf("%lu \n", ul1); // printing with a format specifier

    long long ll1 = -23524568394; //initialize
    printf("%lld \n", ll1); // printing with a format specifier

    unsigned long long ull1 = -913561827659283567; //initialize
    auto a1 = -913561827659283567;
    printf("%llu, %g \n", ull1, a1); // printing with a format specifier

    float f1 = 0.23F; // single precision floating point
    float f2 = 0.23; // double precision floating point
    printf("%f \n", f1 + l1); // printing with decimal digit format
    printf("%e \n", f1); // printing with scientific notation format
    printf("%g \n", f2); // let the compiler decide the format
    
    // 3 ways of initializing a double
    double d1 = 2.312;
    double d2 {2.36457};
    double d3 = {2.33645};
    printf("%e, %f, %g \n", d1, d2, d3); // printing with a format specifier
    print_double(d3); //or use a print function

    long double ld1 = 12.352'451'212; // you can add ' for readability
    long double ld2 = 245.12435124L; // extended precision 
    printf("%g, %g \n", ld1, ld2); // let the compiler decide the format

    // character types
    char c = 'h';
    char16_t c16 = 'E';
    char32_t c32 = 'L';
    signed char sc = 'f';
    unsigned char uc = 'b';
    wchar_t wc = 'Z';
    printf("I will print some characters %c%c\n", c, wc);

    // boolean types
    bool b1 = true, b2 = false;
    printf("%d is true and %d is false \n", b1, b2);

    // comparison operators
    printf("long double == char: %d \n", ld1 == c);
    printf("char16 != char32: %d \n", c16 != c32);
    printf("char > int: %d \n", c > i2);
    printf("signed char >= unsigned char: %d\n", sc >= uc);

    // logical operators
    bool t = true;
    bool f = false;
    printf("!true: %d\n", !t); 
    printf("true && false: %d\n", t && f); 
    printf("true && !false: %d\n", t && !f);

    // arrays
    int arr[] = {1, 2, 3, 4}; // initialize an integer array named 'array'
    int pos1 = arr[0]; //access the array through index
    printf("First position in the array: %d \n", pos1);

    // a simple for loop
    for (int i = 0; i < 4; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // strings
    char eng_sentence[] = "A quick brown fox jumped over the lazy dog.";
    char16_t chinese_sentence[] = u"\u4e66\u4e2d\u81ea\u6709\u9ec4\u91d1\u5c4b";
    // printf("% \n", chinese_sentence);
    printf(eng_sentence);
}