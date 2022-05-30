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