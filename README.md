# CS308-ProgrammingLanguages

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