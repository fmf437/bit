/*
 * bit (build in time) is a program to build directly c and c++ programs 
 * Copyright (C) 2019  Filipe Marques eagle.software3@gmail.com
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <string>

#include "compile.hpp"

/*
#if __cplusplus >= 201103L
#include <experimental/filesystem>
#endif
#if __cplusplus >= 201703L
#include <filesystem>
#endif
*/

using namespace std;

Compile::Compile()
{

}

void Compile::set_instructions(string instructions)
{
  
}

/*
compile each .cpp file present in the directory 
to produce .o object files and include .hpp 
header files and librarys if needed
*/
int Compile::compile_file()
{
  
  return 0;
}

/*
after compile each file links the object files .o
to librarys if needed and produce the program 
*/
int Compile::link_files()
{
  return 0;
}

/*
execute the program if desired in bit.json
*/
int Compile::execute_program()
{
  return 0;
}

/*
clean *.o object files
*/
int Compile::clean_o_files()
{
  return 0;
}

Compile::~Compile()
{

}

