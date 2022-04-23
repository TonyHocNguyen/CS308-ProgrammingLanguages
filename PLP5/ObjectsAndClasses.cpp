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

// an interface implementation
class Animal
{
public:
    virtual ~Animal(){};     // destructor
    virtual void Name() = 0; // pure virtual method with no declaration
    virtual void Sound() = 0;
};

// a class that implements the Animal interface
class Dog : public Animal
{
public:
    void Name() { std::cout << "Bolt" << std::endl; }
    void Sound() { std::cout << "Bark" << std::endl; }
};

// a simple class implementation
// a class declares members private by default
class Person
{
private:
    double age;
    string name;
    double *elem;

public:
    // contrutor
    Person(int person_age, string person_name) : elem{new double[person_age]}
    {
        age = person_age;
        name = person_name;
        for (int i = 0; i != person_age; ++i)
        {
            elem[i] = 0;
        }
    };

    // destructor
    // ~Person()
    // {
    //     delete[] elem;
    //     throw std::runtime_error("I'll be back");
    // };

    // setters/getters
    int get_age() { return age; }
    void set_age(int years) { this->age = years; }
    string get_name() { return name; }
    void set_name(string name) { this->name = name; }

    // compare
    bool operator==(const Person &other) const
    {
        if (this->age == other.age)
        {
            return true;
        }
        return false;
    }

    // overloading methods
    void add_age(int increment)
    {
        this->age = this->age + increment;
    }

    void add_age(double increment)
    {
        this->age = this->age + increment;
    }
};

// a second base class that the student class can inherit
class Employee
{
private:
    string company;

public:
    // constructor
    Employee(string employee_company) { company = employee_company; };

    // destructor
    // ~Employee();

    // setters/getters
    string get_company() { return company; }
    void set_company(string company_name) { this->company = company_name; }
};

// a class that inherits from the Person class
class Student : public Person, public Employee
{
private:
    string school;

public:
    // constructor
    Student(int student_age, string student_name,
            string student_school, string student_company)
        : Person(student_age, student_name), Employee(student_company)
    {
        school = student_school;
    };

    // destructor
    // ~Student();

    // setters/getters
    string get_school() { return school; }
    void set_school(string school_name) { this->school = school_name; }
};

int main()
{
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

    Variant v;
    v.integer = 42;
    printf("The ultimate answer: %d\n", v.integer);
    v.floating_point = 2.7182818284;
    printf("Euler's number e: %f\n", v.floating_point);
    printf("A dumpster fire: %d\n", v.integer);

    Book cpp_primer;
    cpp_primer.name = "C++ Primer (5th edition)";
    cpp_primer.year = 1986;
    cpp_primer.pages = 270;
    cpp_primer.hardcover = false;
    std::cout << "C++ primer has " << cpp_primer.pages << " pages" << std::endl;

    clock_of_the_long_now clock1;
    clock1.set_year(2022);
    std::cout << clock1.get_year() << std::endl;
    clock1.add_year();
    std::cout << clock1.get_year() << std::endl;

    Animal* ani = new Dog();
    ani->Name();
    ani->Sound();

    Person person1(30, "Danny");
    person1.set_age(20);
    person1.set_name("Andy");
    Person person2 = person1;

    std::cout << "Person 1 name is " << person1.get_name() << std::endl;
    std::cout << "Person 1 age is " << person1.get_age() << std::endl;

    Employee employee1("Intel");
    std::cout << "Employee 1 works at " << employee1.get_company() << std::endl;

    Student student1(5, "Sierra", "FUV", "Homebase");
    student1.set_name("Vivian");
    student1.add_age(15);
    student1.add_age(0.512312);
    student1.set_school("Fulbright");

    Student student2(35, "Harry", "UEH", "FUV");
    student2.set_name("Tony");
    student2.set_age(20);
    student2.set_school("Fulbright");
    student2.set_company("Intel");

    bool isEqual = (student1 == student2);

    std::cout << "Student 1 name is " << student1.get_name() << std::endl;
    std::cout << "Student 1 age is " << student1.get_age() << std::endl;
    printf("Student 1 age is %g\n", student1.get_age());
    std::cout << "Student 1 school is " << student1.get_school() << std::endl;
    std::cout << "Student 1 works at " << student1.get_company() << std::endl;
    std::cout << "Student 1 is younger than student 2: " << isEqual << std::endl;

    return 0;
}