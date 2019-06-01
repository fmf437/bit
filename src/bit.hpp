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

#ifndef BIT_HPP
#define BIT_HPP

#include <string>
#include <vector>
#include <fstream>

// json for modern c++
#include "jsonfmcpp/json.hpp"

/**
 * @todo write docs
 */

class Bit
{
public:
    /**
     * Default constructor
     */
    Bit(std::string file_name);

    int run();

    /**
     * Destructor
     */
    ~Bit();
	
private:

    // vars
    nlohmann::json j{};
    std::ifstream read_file;
    std::string command_compile{};
    std::string command_link{};
    std::string test{};
    std::vector<std::string> cpp_files{};
    std::vector<std::string> hpp_files{};

    // methods
    int execute_compile(std::string command);
};

#endif
