This repository contains some tests I conducted to better learn compilation tasks and debug in Visual Studio Code for a generic C++ code.
This might be useful to keep a good and clean organization of small-medium projects without the need to learn a more advanced build system like CMake.

The tasks include compilation commands for g++ and also a cross compilation command to Win64 targets (MinGW).
The compilation instructions are "enhanced" with shell commands (for both Linux and Windows) to build all the programs in the root directory using the library functions (`.cpp`) in the `lib` folder.
The output files are then located in the `bin` folder (with the same names of the `.cpp` files in root directory).
The files generated for debugging are placed in a separated folder named `dbg`.

Instructions for unexperienced users:
- make sure you have g++ installed on your computer (check pasting `g++ --version` on your terminal)
- if you want to use cross-compilation features, install MinGW
- place the `.code-workspace` (named as you like) in the root directory of your project
- create the working folders in your root directory: `lib`, `dbg`, `bin` (if you don't, the tasks won't work properly)
- place your main code (`.c` or `.cpp`) in the root and your auxiliary libraries (`.c` or `.cpp`) in the `lib` folder (keep in mind to properly link the code with headers and declarations)
- to compile all the programs in root directory, just press `Terminal` → `Run Build Task` (`Ctrl+Shift+B` by default)
- to debug a program, just open the file and press `F5` (will generate the debug file in `dbg` folder)
- to cross compile (output will be in `bin` folder), `Terminal` → `Run Task` → `Build for Win64 (cross)`
