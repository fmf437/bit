/*
#include <iostream>
#include "json.hpp"

using namespace std;

int main()
{
    nlohmann::json j{};
    cout << "Hello JSON for Modern C++!" << endl;
    return 0;
}

*/

/*#include <iostream>
#include "json.hpp"
#include <sstream>

using namespace std;

int main(int argc, char **argv) {
	nlohmann::json j;
    cout << "Hello, world!" << endl;
    return 0;
}
*/

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

//using namespace std;
//using namespace nlohmann;

int main(int argc, char **argv)
{

    Bit b{"bit.json"};
    b.run();

	//cout << string(j["name"]) << endl;
	//cout << string(j["type"]) << endl;
	//cout << string(j["lang"]) << endl;
	//cout << string(j["src_files"]) << endl;
    //cout << string(j["standard"]) << endl;
	
	
	
	//vector<string> keys_names{};
    //keys_names.push_back(j["name"]);
    //keys_names.push_back(j["type"]);
    //for (auto kn: keys_names)
    //{
    //    cout << kn << endl;
    //}
    return 0;
}
