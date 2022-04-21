#include <iostream>
#include <cstdio>
using namespace std;

/*
    The following example of data types are called User-defined types and we\
    will look more closely into C++ classes through these types.
*/

// an Enumemations type
enum class Race
{
    An,
    Bao,
    Cuong,
    Duy
};

// a Unions type
union Variant
{
    char string[10];
    int integer;
    double floating_point;
};

// a simple class implementation
// a class declares members private by default
class Person
{
private:
    int age;
    string name;

public:
    int get_age() { return age; }
    void set_age(int years) { this->age = years; }
    string get_name() { return name; }
    void set_name(string name) { this->name = name; }
};

// a second base class that the student class can inherit
class Employee
{
private:
    string company;

public:
    string get_company() { return company; }
    void set_company(string company_name) { this->company = company_name; }
};

// a class that inherits from the Person class
class Student : public Person, public Employee
{
private:
    string school;

public:
    string get_school() { return school; }
    void set_school(string school_name) { this->school = school_name; }
};

// a POD (Plain-Old-Data) class
// a struct declares members public by default
struct Book
{
    string name;
    int year;
    int pages;
    bool hardcover;
};

// a fully featured C++ classes
// a struct declares members public by default
struct clock_of_the_long_now
{
    // private variables or methods
private:
    int year;

    // public variables or methods
public:
    void add_year() { year++; }

    bool set_year(int new_year)
    {
        if (new_year > 2000)
        {
            year = new_year;
            return true;
        }
        return false;
    }

    int get_year() { return year; }
};

int main()
{
    Person person1;
    person1.set_age(20);
    person1.set_name("Andy");

    std::cout << "Person 1 name is " << person1.get_name() << std::endl;
    std::cout << "Person 1 age is " << person1.get_age() << std::endl;

    Student student1;
    student1.set_name("Vivian");
    student1.set_age(21);
    student1.set_school("Fulbright");
    student1.set_company("Homebase");

    std::cout << "Student 1 name is " << student1.get_name() << std::endl;
    std::cout << "Student 1 age is " << student1.get_age() << std::endl;
    std::cout << "Student 1 school is " << student1.get_school() << std::endl;
    std::cout << "Student 1 is working a part-time job at " << student1.get_company() << std::endl;

    Race race = Race::Duy;
    switch (race)
    {
    case Race::An:
    {
        std::cout << "Hello this is An" << std::endl;
    }
    break;
    case Race::Bao:
    {
        std::cout << "Hello this is Bao" << std::endl;
    }
    break;
    case Race::Cuong:
    {
        std::cout << "Hello this is Cuong" << std::endl;
    }
    break;
    case Race::Duy:
    {
        std::cout << "Hello this is Duy" << std::endl;
    }
    }

    Book cpp_primer;
    cpp_primer.name = "C++ Primer (5th edition)";
    cpp_primer.year = 1986;
    cpp_primer.pages = 270;
    cpp_primer.hardcover = false;
    std::cout << "C++ primer has " << cpp_primer.pages << std::endl;

    Variant v;
    v.integer = 42;
    printf("The ultimate answer: %d\n", v.integer);
    v.floating_point = 2.7182818284;
    printf("Euler's number e: %f\n", v.floating_point);
    printf("A dumpster fire: %d\n", v.integer);

    clock_of_the_long_now clock1;
    clock1.set_year(2022);
    std::cout << clock1.get_year() << std::endl;
    clock1.add_year();
    std::cout << clock1.get_year() << std::endl;

    return 0;
}