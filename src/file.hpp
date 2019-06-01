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

#ifndef FILE_HPP
#define FILE_HPP

#include <vector>
#include <string>
#include <filesystem>
#include <iostream>

/**
 * @todo write docs
 */

class File
{
public:
    /**
     * Default constructor
     */
    File();

    std::vector<std::string> list_c_files(std::string path);
	
    std::vector<std::string> list_cpp_files(std::string path);

    std::vector<std::string> list_object_files(std::string path);

    bool remove_object_file();

    std::string get_dirname(std::string pat_h);
    
    std::string get_file_name(std::string pa_th);
    
    /**
     * Destructor
     */
    ~File();
	
private:
    std::vector<std::string> c_files{};
    std::vector<std::string> cpp_files{};
    std::vector<std::string> obj_files{};
    std::string path_object{};
};

#endif
