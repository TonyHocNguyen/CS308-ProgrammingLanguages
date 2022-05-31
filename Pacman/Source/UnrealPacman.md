## Instructions to Pacman

This is the C++ code for the Unreal Engine Pacman game. The code cannot run on its own and requires Unreal Engine 4.27
For this project, I followed a [tutorial](https://youtu.be/LsNW4FPHuZE) from Awesome Tuts as well as reading the Unreal Engine documentations. The Unreal Engine forums is also a good place to look for a solution.
I also use a starter package containing the textures, colors, etc. for the game blueprints that you can find [here](https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqbkNXLV9WLUdUX2t6N0g4bHByRHFNaTBMTDRId3xBQ3Jtc0trMGVwV05YbGxCYkp1RTA5Nkc5LTU3eGZ3bHBrTlluOXl0ZkZ6M1V3VV9Bb2JnTHhJZzlva3R6Mk5qUi1NLTZhc3hzM0ptOUlkc0F2UWwtN0YtVGZnSU4xWU9QaXZxTkRVWm0yaXE0X3kydG5UdGZrZw&q=https%3A%2F%2Fwww.filepicker.io%2Fapi%2Ffile%2FuASaLcXOQR2uIJLqW4Mv&v=LsNW4FPHuZE).

### Installing Unreal Engine 

1. Download and install the Epic Games launcher from this [link](https://store.epicgames.com/en-US/download).
2. Once installed, open the launcher and switch to the Unreal Engine tab for installation. You should have an Epic Games account for this step.
3. Pick an Unreal Engine version that is compatiable with your machine. Please note that lower versions of Unreal Engine might not work properly with this code.
4. Once the engine is installed, create an empty project (should be named Pacman for this code to work). If you choose another name, you can rename the folder, the main ```Pacman.cpp``` file and the header ```Pacman.h```. These should have the same name.
5. Load the code, create the blueprints, compile, play!

### Learning reflection

* Blueprints and C++ code go hand in hand with each other in Unreal Engine. (at least in my limited experience)
* Every object (class) can inherit one of Unreal Engine's base classes or can be an empty one. Each C++ class requires a header file.
* Lots of encapsulation and forward declarations.
* A lot of things run under the hood in Unreal Engine. Make sure to read the documentation of the base class to know what functions and attributes are available.

### Future development

* Successfully modified character movement axis bindings. My implementation is in ```PacmanController2.cpp``` and ```PacmanPawn2.cpp```.
* Adjust character rotations.

### References

* https://youtu.be/LsNW4FPHuZE
* https://awesometuts.com/blog/category/unreal/
* https://docs.unrealengine.com/4.27/en-US/InteractiveExperiences/HowTo/CharacterMovement/
* https://docs.unrealengine.com/4.26/en-US/ProgrammingAndScripting/ProgrammingWithCPP/CPPTutorials/PlayerInput/
