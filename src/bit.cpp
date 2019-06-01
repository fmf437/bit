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

#include "bit.hpp"

#include "compile.hpp"
#include "file.hpp"
#include "gnu_options.hpp"

using namespace std;

Bit::Bit(string file_name)
{
    read_file.open(file_name);
    if(!read_file.is_open())
    {
        cerr << "File not open!" << endl;
    }
}

int Bit::run()
{
    File fi{};
    Compile comp{};

    //read_file >> j;
    j = j.parse(read_file);
    if(j.contains("type") && string(j["type"]) == "app")
    {
        if(j.contains("name") &&  j.contains("src_files") &&  j.contains("lang") &&  string(j["lang"]) == "c++")
        {
	  /*
	    command_compile.append(lib["cxx_compiler"]);
            command_compile.append(" ");
            command_compile.append(lib["output_files"]);
            //cout << command_compile << endl;

            command_compile.append(" ");
            command_compile.append(fi.get_dirname(j["src_files"]));
            command_compile.append(string(j["name"]));
            //cout << command_compile << endl;

            command_compile.append(" ");
            command_compile.append(lib["all_warnings"]);
            //cout << command_compile << endl;

            command_compile.append(" ");
            command_compile.append(lib["optimizations"]);
            //cout << command_compile << endl;

            command_compile.append(" ");
            //cout << command_compile << endl;
            */

	  //if(string(j["standard"]) == "11")
      //  {
       //     command_compile.append(lib["cxx_standard_11"]);
       //     cout << command_compile << endl;
            //cout << fi.get_dirname(j["src_files"]) << endl;
            //execute_compile(command_compile);
            //fi.remove_object_file();
       // }

            // COMPILE EACH SOURCE FILE
	        for (auto& i: fi.list_cpp_files(j["src_files"]))
            {
                // example:  g++ -c -g -Wall -Isrc/ -std=c++17 -o src/bit.o src/bit.cpp
                command_compile.append(lib["cxx_compiler"]);
		        command_compile.append(" ");
                
                command_compile.append(lib["compile_files"]);
                command_compile.append(" ");
                
                command_compile.append(lib["output_files"]);
                command_compile.append(" ");

                // object files
                command_compile.append(fi.get_dirname(j["src_files"]));
                //cout << fi.get_file_name(i) << endl;
			    command_compile.append(fi.get_file_name(i));
                command_compile.append(".o");
                command_compile.append(" ");

                // source files
                command_compile.append(i);
                command_compile.append(" ");

                // include
                command_compile.append("-I");
                command_compile.append(" ");
                command_compile.append(fi.get_dirname(j["src_files"]));
                command_compile.append(" ");
		        
                // options
                command_compile.append(lib["all_warnings"]);
                command_compile.append(" ");
			    command_compile.append(lib["optimizations"]);
                command_compile.append(" ");
                
                // standard
                if(j.contains("standard") && string(j["standard"]) == "11")
                    command_compile.append(lib["cxx_standard_11"]);
                
                // for debug purpose and to prepare for -sv (setverbose) option in args class to argv[1]
                cout << command_compile << endl;
                execute_compile(command_compile);
                cout << "Compiled: " << i << endl;
                command_compile.clear();
    		}
            
            // LINKING THE OBJECT FILES TOGETHER TO PRODUCE THE EXECUTABLE PROGRAM
            for(auto& i: fi.list_object_files(j["src_files"]))
            {

                test.append(i);
                test.append(" ");
            }
            cout << test << endl;

            // g++ -o bit src/bit.o src/library.o src/compile.o src/args.o src/file.o src/main.o -std=c++17 -lstdc++fs
            command_link.append(lib["cxx_compiler"]);
		    command_link.append(" ");

            command_link.append(lib["output_files"]);
            command_link.append(" ");

            command_link.append(string(j["name"]));
            command_link.append(" ");

            command_link.append(test);

            //command_link.append(fi.get_dirname(j["src_files"]));
            //command_link.append(string(j["name"]));

            if(j.contains("standard") &&  string(j["standard"]) == "11")
                command_link.append(lib["cxx_standard_11"]);

            execute_compile(command_link);
            cout << command_link << endl;
            command_link.clear();
        }
    }
    return 0;
}


Bit::~Bit()
{

}

int Bit::execute_compile(string command)
{
    std::system(command.data());
    return 0;
}

