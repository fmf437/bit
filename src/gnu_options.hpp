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

#ifndef GNU_OPTIONS_HPP
#define GNU_OPTIONS_HPP

#include <map>
#include <string>

std::map<std::string, std::string> lib{
    {"c_compiler", "gcc"},
    {"cxx_compiler", "g++"},
    {"optimizations", "-O2"},
    {"all_warnings", "-Wall"},
    {"extra_warnings", "-Wextra"},
    {"machine_spec", "-march=native"},
    {"compile_files", "-c"},
    {"output_files", "-o"},
    {"cxx_standard_11", "-std=c++11"},
    {"cxx_standard_14", "-std=c++14"},
    {"cxx_standard_17", "-std=c++17"}
};

#endif

