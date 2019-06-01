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

#include "file.hpp"

using namespace std;

/*
#if __cplusplus >= 201103L
#include <experimental/filesystem>
#endif
#if __cplusplus >= 201703L
#include <filesystem>
#endif
*/

File::File()
{

}

vector<string> File::list_c_files(string path)
{
    path_object.append(path);
    for(auto& p: filesystem::directory_iterator(path))
    {
        //std::cout << p.path() << '\n';
        if(p.path().extension() == ".c")
        {
            c_files.push_back(p.path());
        }
    }
    return c_files;
}

vector<string> File::list_cpp_files(string path)
{
    path_object.append(path);
    for(auto& p: filesystem::directory_iterator(path))
    {
        //std::cout << p.path() << '\n';
        if(p.path().extension() == ".cpp")
        {
            cpp_files.push_back(p.path());
        }
    }
    return cpp_files;
}

vector<string> File::list_object_files(string path)
{
    path_object.append(path);
    for(auto& p: filesystem::directory_iterator(path))
    {
        //std::cout << p.path() << '\n';
        if(p.path().extension() == ".o")
        {
            obj_files.push_back(p.path());
        }
    }
    return obj_files;
}


bool File::remove_object_file()
{
    for(auto& p: filesystem::directory_iterator(path_object))
    {
        if(p.path().extension() == ".o")
        {
            cout << p.path().filename() << endl;
            //filesystem::remove(p.path().filename());
        }
    }
    return true;
}

// return the name of directory
string File::get_dirname(string pat_h)
{
    return filesystem::path(pat_h).remove_filename();
}

// return the name of file without the extension
string File::get_file_name(string pa_th)
{
    return filesystem::path(pa_th).stem();
}

File::~File()
{

}

