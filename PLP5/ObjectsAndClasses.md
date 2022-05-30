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