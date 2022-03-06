# CS308-ProgrammingLanguages
## Intructions to PLP2

The DataTypes.cpp program contains example codes on C++ names, types, and bindings. The program walks through how to create variables in some of the common data types with the correct naming conventions. 

### Naming conventions (duh)

I looked into the naming conventions in C++ but there are a few differences between sources. [GeeksforGeeks](https://www.geeksforgeeks.org/naming-convention-in-c/) and [Google C++ style guide](https://google.github.io/styleguide/cppguide.html#Naming) suggests that naming classes, functions should use CamelCase and variable names can be separated with '_' or '-'. However, Bjarne Stroustrup's textbook [A Tour of C++](https://www.amazon.com/dp/0134997832) seem to use the same '_' separation style for both classes, functions, and variable names. It seems that the naming convention depends on the project/program (E.g., [GROMACS](https://manual.gromacs.org/documentation/5.1-current/dev-manual/naming.html#:~:text=would%20be%20better.-,C%2B%2B%20code,variables)%20with%20a%20lowercase%20letter.)). Namings should be consistent across and avoid reserved identifiers.

### Keywords and reserved words and naming requirements

When declaring a variable name, it is best to avoid keywords and special characters (types, loops, operators). [Geeks for Geeks](https://www.geeksforgeeks.org/cpp-keywords/) offers a good list of keywords. Other reserved words can be referenced [here](https://en.cppreference.com/w/cpp/keyword).

### Statically or dynamically typed

C++ is statically typed. Although C++ use the keyword $auto to let the compiler infer the type of the variable being declared from the type of the value, once the compiler infers the type of that variable, it cannot be changed.

### Strongly or weakly typed

According to the creator (bruh watch the [interview](https://www.youtube.com/watch?v=ngvJ2Z3VBpk)), C++ is mostly strongly typed. There are circumstances where the programmer needs to weaken/suppress the type checking of C++ to allocate memory for the hardware.  

### Explicitly or implicitly typed

When initializing a variable in C++, the type of the variable is explicitly defined (check example code).

User-defined types in C++ variables can be implicitly initiallized by the keyword $auto. It also has implicit type conversion or narrowing conversion using the $= operator such as **double** to **int** or **int** to **char** but conversion will lose information. When using $auto, it is recommended to use $= to avoid troublesome type conversion in the background. (A Tour of C++, chapter 1)

For the auto type variable, I do not know how to print it out with a format specifier yet.

### Are some variables mutable while others are immutable?

### What are the operators available for each data type?

### Are mixed type operations allowed? If so, how are they accommodated?

### At what point are identifier names and operator symbols bound?

In C++, an identifier is bound when declaring a variable and its type.

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