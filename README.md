bit

Table of Contents

- [What is bit and it's design goals ?](#what-is-bit-design-goals)
- [Example of bit.json](#example-bit)
- [bit documentation](#bit-documentation)
- [Thanks to ...](#thanks-to)
- [Supported compilers](#supported-compilers)
- [Build bit](#build-bit)
- [To do list](#to-do-list)
- [License of bit](#design-goals)
- [Contact](#contact)

## What is bit and it's design goals ?

bit is a tool to build directly C/C++ projects, using a json file to build.
It's design goals are:
  - much better and faster than GNU Make and CMake together;
  - small foot print and very small size program tool;
  - doesn't generate make files;
  - don't need to write the names of source files in bit.json, bit will list them in the directory for you (ideal for big projects with lots of source files);
  - call directly the compiler to build your project;
  - manage to delete object files, if you desire it;
  - execute your program, if you desire it;
  - minimal dependencies (just one [JSON for Modern C++](https://github.com/nlohmann/json))

## Example of bit.json

bit expects a file called 'bit.json', in the root project directory, to build your C/C++ project.
See the directory 'bit_examples' for live examples.

For instance take a look at this example:

- my_project (folder)
  - bit.json
  - cpp_src (folder)

And 'bit.json' contains:
```
{
	"name" : "Hello_World",
	"type" : "app",
	"lang" : "c++",
	"src_files" : "cpp_src/",
	"standard" : "11",
	"execute" : 1,
    "_comment" : "A simple c++ example with a class to say hello!",
    "debug" : 1
}
```

### bit documentation

- name - the name of executable program you want;

- type
  - app it build the program
  - lib build a library (not yet implemented)

- lang - language used
  - c (not yet implemented)
  - c++;

- src_files - the name of the directory that contains source and header files;

- standard - which standard to use;
  - 11
  - 14 (not yet implemented)
  - 17 (not yet implemented)

- execute - after build it, execute the program;

- _comment - to you know which bit.json file does, this is just information for the developer;

- debug - integrate gdb to debug the program (not yet implemented);

- clean - delete object files;

## Thanks to ...

The bit project use [JSON for Modern C++](https://github.com/nlohmann/json) project.
The json.hpp header file is included in the source files of bit in a folder called jsonfmcpp.

Many thanks to Niels Lohmann and its contributors for creating and develop a very good C++ json library !

## Supported compilers

For now only support GNU GCC and works in Linux operating systems.

## Build bit

The bit project is written in C++ 17, has only one dependency as said early and use the Standard Template Library (STL).
For building bit, you need GNU GCC version equal or greater than 8.3, with support to C++ 17 standard.

I tryed to build bit in travis continuous integration system, but they don't support gcc 8.3, so I build it in circle continuous integration system.

You can try it in your computer and for that you download the master branch, which is the stable branch, and go to the terminal console and type:

For development mode:

./compile_bit.sh -d

For release mode and it will move bit executable to a system directory:

./compile_bit.sh -r

## To do list

Stable branch and releases: master

The development is made in the dev branch and pull requests should target it.

- Compile c++ projects without dependencies, just the STL;
- Compile c projects without dependencies, just the STL;
- Compile in debug mode for integration to gdb c or/and c++ projects without dependencies, just the STL;
- Link the object files to produce the executable program;
- If choosen execute the program;
- Clean and remove the object files;
- Integrate with gdb to debug;
- Build static library;
- Build shared library;
- Compile in debug mode for integration to gdb c or/and c++ projects with dependencies (library: like sfml, ...);
- Compile c or/and c++ projects with dependencies (library: like sfml, ...);
- Install / move the program to directory of system (/usr/bin/);
- Integrate to produce documentation with doxygen;
- Add console options (version, verbose, ...);
- Better documentation of bit;

## License of bit

The source code of bit is licensed under the GNU GPL version 3 or later.
bit program and name is Copyright (C) of Filipe Marques.

## Contact

You can contact me by send an [email](eagle.software3@gmail.com).
