# Compile in debug mode -g for development
g++ -c -g -Wall -Isrc/ -std=c++17 -o src/bit.o src/bit.cpp
g++ -c -g -Wall -Isrc/ -std=c++17 -o src/library.o src/library.cpp
g++ -c -g -Wall -Isrc/ -std=c++17 -o src/compile.o src/compile.cpp
g++ -c -g -Wall -Isrc/ -std=c++17 -o src/args.o src/args.cpp
g++ -c -g -Wall -Isrc/ -std=c++17 -o src/file.o src/file.cpp
g++ -c -g -Wall -Isrc/ -std=c++17 -o src/main.o src/main.cpp
g++ -o bit src/bit.o src/library.o src/compile.o src/args.o src/file.o src/main.o -std=c++17 -lstdc++fs

#g++ -o bit bit.cpp library.cpp compile.cpp args.cpp file.cpp main.cpp -std=c++17 -lstdc++fs -I.

# Remove the object files *.o
rm src/*.o
