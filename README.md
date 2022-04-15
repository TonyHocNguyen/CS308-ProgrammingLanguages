# CS308-ProgrammingLanguages
## Intructions to PLP3

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

### Compile and run the program

Build the program by navigating to **Terminal > Run Build Task** or **Ctrl+Shift+B**. This will create an executable file (.exe) in the same folder of the source code. You can double click on the .exe file or run the program in the terminal ".\your_file_name".

### Additional resources for C++ types, namings, and bindings

The latest version of C++ is C++17 and I found a comprehensive list of books/resources on [Stackoverflow](https://stackoverflow.com/questions/388242/the-definitive-c-book-guide-and-list). The second edition of [A Tour of C++](https://www.amazon.com/dp/0134997832) by Bjarne Stroustrup himself (which is updated for C++17). [C++ Crash Course: A Fast-Paced Introduction](https://www.amazon.com/C-Crash-Course-Josh-Lospinoso/dp/1593278888) by Josh Lospinoso