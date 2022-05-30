# CS308-ProgrammingLanguages

## Instructions to PLP1
This is my first try at C++ and the README to this repository will guide you to installing and running C++ on a Windows machine.

### Install a code editor (duh)

I chose Visual Studio Code since this is what I am used to. It is fairly simple to install and quite powerful. Download VS Code through this [link](https://code.visualstudio.com/download) and install.

### Install and setup git

I chose most of the default options that Git offers. Read the installation instruction carefully depending on your preference. Download Git through this [link](https://git-scm.com/downloads) and install.

You might need to install Github CLI to integrate Git in your terminal. This makes cloning the repository and using git in the VS Code terminal much easier. Download Github CLI [here](https://git-scm.com/downloads) and install.

Once installed, open the git terminal and use this command to authenticate:

    $gh auth login

Then you can clone the repository using this command:

    $gh repo clone TonyHocNguyen/CS308-ProgrammingLanguages

If you don't want to clone the repository, just create a new folder locally and follow the instructions in the documentation to create the C++ Hello World program.  

### Install a complier

C++ code needs a compiler to run and I followed the steps provided in the VS Code [documentation](https://code.visualstudio.com/docs/languages/cpp). This documentation also has instructions for other operating systems.

I installed MinGW-x64 via [MSYS2](https://www.msys2.org/) (you can opt for x-86 or any other compiler depending on the system you are using and preference). Then I added the MinGW complier to the Windows PATH environment variable (using the installation path) so that VS Code knows where to locate the compiler.

### Hello World and run the program

After writing your C++ Hello World (should be a .cpp file), build the program!!! **Terminal > Run Build Task** or **Ctrl+Shift+B**. This will create an executable file (.exe) in the same folder of the source code. You can double click on the .exe file or run the program in the terminal ".\your_file_name".

### The creation of C++ and its purposes

C++ was created by [Bjarne Stroustrup](https://en.wikipedia.org/wiki/Bjarne_Stroustrup). The creator shared why he created C++ in an [interview](https://www.youtube.com/watch?v=JBjjnqG0BP8) - a language with high-level abstraction but efficient and can run as fast as low-level programming languages for demanding computations. C++ was developed for multiple [purposes](https://en.wikipedia.org/wiki/C%2B%2B) such as operating systems, embedded systems, games, servers, databases, etc.

### Additional resources for C++ programming

The latest version of C++ is C++17 and I found a comprehensive list of books/resources on [Stackoverflow](https://stackoverflow.com/questions/388242/the-definitive-c-book-guide-and-list). The [second edition](https://www.amazon.com/dp/0134997832) of "A Tour of C++" by Bjarne Stroustrup himself (which is updated for C++17) might be a good start for me. I will look out for more resources later on since I don't have a preference for any good programming book author.

## Intructions to PLP2

The DataTypes.cpp program contains example codes on C++ names, types, and bindings. The program walks through how to create variables in some of the common data types with the correct naming conventions. 

### Naming conventions (duh)

I looked into the naming conventions in C++ but there are a few differences between sources. [GeeksforGeeks](https://www.geeksforgeeks.org/naming-convention-in-c/) and [Google C++ style guide](https://google.github.io/styleguide/cppguide.html#Naming) suggests that naming classes, functions should use CamelCase and variable names can be separated with '_' or '-'. However, Bjarne Stroustrup's textbook [A Tour of C++](https://www.amazon.com/dp/0134997832) seem to use the same '_' separation style for both classes, functions, and variable names. It seems that the naming convention depends on the project/program (E.g., [GROMACS](https://manual.gromacs.org/documentation/5.1-current/dev-manual/naming.html#:~:text=would%20be%20better.-,C++%20code,variables). Namings should be consistent across and avoid reserved identifiers.

### Keywords and reserved words and naming requirements

When declaring a variable name, it is best to avoid keywords and special characters (types, loops, operators). [Geeks for Geeks](https://www.geeksforgeeks.org/cpp-keywords/) offers a good list of keywords. Other reserved words can be referenced [here](https://en.cppreference.com/w/cpp/keyword).

### Statically or dynamically typed

C++ is statically typed. Although C++ use the keyword **auto** insteadto let the compiler infer the type of the variable being declared from the type of the value, once the compiler infers the type of that variable, it cannot be changed.

### Strongly or weakly typed

According to the creator (bruh watch the [interview](https://www.youtube.com/watch?v=ngvJ2Z3VBpk), C++ is mostly strongly typed. There are circumstances where the programmer needs to weaken/suppress the type checking of C++ to allocate memory for the hardware.

### Explicitly or implicitly typed

When initializing a variable in C++, the type of the variable is explicitly defined (check example code).

User-defined types in C++ variables can be implicitly initiallized by the keyword **auto**. It also has implicit type conversion or narrowing conversion using the **=** operator such as **double** to **int** or **int** to **char** but conversion will lose information. When using **auto**, it is recommended to use **=** to avoid troublesome type conversion in the background. (A Tour of C++, chapter 1)

For the auto type variable, I do not know how to print it out with a format specifier yet.

### Are some variables mutable while others are immutable?

In C++, variables can be mutable when adding the keyword **mutable** before the variable type when initializing. Otherwise, once initialized, a variable will be immutable.

### What are the operators available for each data type?

There are different types of operators in C++. Examples can be found [here](https://www.programiz.com/cpp-programming/operators) or in the code. The modulo operator can only be used for **int** data types. The bitwise operator can only be used for **char** and **int** data types. 

### Are mixed type operations allowed? If so, how are they accommodated?

I have only tried mixed type arithmetic operations (+, -, *. /, %) in the example code (it works!) but not other operations. I am not sure if other operations allow mixed types.

### At what point are identifier names and operator symbols bound?

In C++, an identifier is bound when declaring a variable and its type.

### Compile and run the program

Build the program by navigating to **Terminal > Run Build Task** or **Ctrl+Shift+B**. This will create an executable file (.exe) in the same folder of the source code. You can double click on the .exe file or run the program in the terminal ".\your_file_name".

### Additional resources for C++ types, namings, and bindings

The latest version of C++ is C++17 and I found a comprehensive list of books/resources on [Stackoverflow](https://stackoverflow.com/questions/388242/the-definitive-c-book-guide-and-list). The second edition of [A Tour of C++](https://www.amazon.com/dp/0134997832) by Bjarne Stroustrup himself (which is updated for C++17). [C++ Crash Course: A Fast-Paced Introduction](https://www.amazon.com/C-Crash-Course-Josh-Lospinoso/dp/1593278888) by Josh Lospinoso

## Intructions to PLP3

The SelectionControlStructure.cpp program contains example codes on C++ selection statments. The program walks through some common conditions of if/else cases and switch cases. The dangling else problem is also addressed.

### What are boolean values in C++?

In C++, boolean values are **True**, which evaluates to binary (1), and **False**, which evaluates to binary (0). 

### What types of conditional statments are available? Different selection statments other than **if**? 

You can use **if**, **else if**, and **else** selection statments in C++.

### Code blocks delimiters in C++?

C++ delimits code blocks with a pair of curly brackets **{}**. After the keyword **if**, the codition must be put inside a pair of parentheses **()** then followed by the execution code insde the curly brackets **{}**. The same goes for  **else if** and **else** statements.

### Short-circuit evaluation in C++?

You can short-circuit in C++ using AND (&&) and OR (||) logical operator. I believe C++ supports both working and not working short-circuit logic like Java. Check the example code. 

### The "dangling else" problem in C++?

According to this [tutorial](https://www.cs.drexel.edu/~jpopyack/Courses/GovSchool/2005/Wi04/lectures/08.2_nested_conditionals/DanglingElse.html?CurrentSlide=3), the **dangling else** problem usually happens when the programmer leaves out the braces in an **if** condition and relies on the code indentation. When leaving out the brackets to delimit code blocks, the **else** statement will be associated with the last **if** statement used. Seems like in this version of C++, I can use the dangling else. However, a source on [Stackoverflow](https://stackoverflow.com/questions/43469611/finding-dangling-else-in-c-code) says that this will get caught by the build tool warning flag. Other examples from [Stanford](http://theory.stanford.edu/~amitp/yapps/yapps-doc/node3.html) and [Drexel](https://www.cs.drexel.edu/~jpopyack/Courses/GovSchool/2005/Wi04/lectures/08.2_nested_conditionals/DanglingElse.html?CurrentSlide=3) doesn't seem to mind this problem.

### Do you need **break** for switch or case statements? Can we use **continue**?

Yes, C++ needs breaks for switch cases. It seems that C++ doesn't like programmers using continue instead of breaks inside switch cases loops.

### Compile and run the program

Build the program by navigating to **Terminal > Run Build Task** or **Ctrl+Shift+B**. This will create an executable file (.exe) in the same folder of the source code. You can double click on the .exe file or run the program in the terminal ".\your_file_name".

### Additional resources for C++ selection, control, structure

The latest version of C++ is C++17 and I found a comprehensive list of books/resources on [Stackoverflow](https://stackoverflow.com/questions/388242/the-definitive-c-book-guide-and-list). The second edition of [A Tour of C++](https://www.amazon.com/dp/0134997832) by Bjarne Stroustrup himself (which is updated for C++17). [C++ Crash Course: A Fast-Paced Introduction](https://www.amazon.com/C-Crash-Course-Josh-Lospinoso/dp/1593278888) by Josh Lospinoso
## Intructions to PLP4

The LoopsAndFunctions.cpp program contains example codes on C++ loop statements and simple functions. Examples include multiplying 2 numbers, recursion, splitting a string, etc.

### Does C++ include multiple types of loops?

Yes. C++ includes **while**, **do-while**, and **for** loops. **while** and **do-while** loops need an increment variable to work. **for** loops can be used with a specified range or use the size of an array if you want to loop through that array. The code example show how to pass an array and its size to a **for** loop. 

### Syntax for declaring a function in C++? 

The syntax for declaring a function in C++ generally goes as:
```
    return_type function_name(parameters)
```
I generally use ```snake_case``` rather than ```camelCase``` to name my methods and functions. I don't think others use ```PascalCase``` naming convetion in C++.

### Rules on placing functions in C++?

The ```main``` method is the last method and calls other helper methods/functions to do what we want. The helper methods/functions are placed before the ```main``` method. The ```main``` method can implicitly or explicitly returns 0. There are opinions that an implicit return 0 for ```main``` can have tricky complications. Therefore, explicit return 0 is preferred.

### Does C++ support recursion?

Yes. C++ supports recursion. The general format for a recursion is:
```
    return_type recursion(parameters) 
    { 
        if (condition)
        {
            return recursion(parameters);
        }
        else (condition)
        {
            return something;
        }
    }
    
    int main()
    {
        recursion(parameters);
    }
```
Depends on your base case and conditions for your recursion application.

### Can a function in C++ accept multiple variable parameters?

Yes. C++ accepts multiple variable parameters. The general format goes as follows:

```
    return_type function_name(parameter_1, parameter_2, parameter_3)
    {
        return;
    }
```

### Can a function in C++ return multiple values at the same time? How? Problems?

No. C++ wil shout at you for returning multiple values or something different from the function's return type. However, return multiple values with the same return type of the function gives you bizaar results. There is a workaound for returning multiple values with different return type by using ```struct``` (explained in the code example). I will look further into this in future revisions.

### Is C++ pass-by reference or pass by value?

C++ seems to be pass-by value for primitive types (unless the parameter argument says otherwise) and pass-by pointer (pointer value) for objects like arrays. You can also pass an array by reference. I will look further into this in future revisions.

## Instructions to PLP5

The ObjectsAndClasses.cpp program contains example codes for creating classes and objects in C++. There are conventions in styling and inheritance when creating classes or objects included in the code.

### Does C++ support objects or something similar? Are there naming conventions for objects, instance variables, or functions?

Yes, C++ supports objects. It is the heart and soul of C++. There are 2 ways of declaring an object: ```struct``` (declare attributes as public by default) and ```class``` (declare attributes private by default). It depends on the programmer to choose which style they want to implement and stick to that style. 

### Does C++ have standard methods for functions that can be used across all objects (toString, compare, etc.) or are there something similar?

For compare methods, you can overload the operator (==, <=, >=, etc.) to compare the desired attributes between objects. For toString methods (printing out an object attributes), C++ does not have built-in method for this but you can define a method to print out the attributes that you want. 

### How does interface work (if applicable)? Does C++ support multiple inheritance?

C++ does not have a concrete way to implement interface like Java but make use of class containing only pure virtual methods (a virtual method with no directly callable implementation) and destructors to create interfaces. A virtual method is declared with the ```virtual``` keyword. To use the interface, create another class and override the virtual methods.

### If inheritance is applicable, how does C++ deal with overloading method names and resolving those calls?

Inheritance is possible in C++. A subclass can inherit from a base class's attributes and its methods (including contructors/destructors). Destructors can only be used for a pointer of a complete object type and not for primitive types. It is advised to NOT call C++ destructors explicitly.

### Anything else important about objects and inheritance in C++ 
As of now, I have not found a way to implement C++ destructors for explicit calls in the program and try/catch/throw and function overloading does not seem to work as I have expected. 
After writing your C++ Hello World (should be a .cpp file), build the program!!! **Terminal > Run Build Task** or $Ctrl+Shift+B. This will create an executable file (.exe) in the same folder of the source code. You can double click on the .exe file or run the program in the terminal ".\your_file_name".
