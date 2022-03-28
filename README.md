# CS308-ProgrammingLanguages
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