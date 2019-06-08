#!/bin/bash
# To compile bit

if [[ $1 = "-d" ]]; then
  # Compile in debug mode -g for development
  echo "Compile in debug mode -g for development !"
  echo "1.1 - Compiling the source files ..."
  g++ -c -g -Wall -Isrc/ -std=c++17 -o src/bit.o src/bit.cpp;
  g++ -c -g -Wall -Isrc/ -std=c++17 -o src/library.o src/library.cpp;
  g++ -c -g -Wall -Isrc/ -std=c++17 -o src/compile.o src/compile.cpp;
  g++ -c -g -Wall -Isrc/ -std=c++17 -o src/args.o src/args.cpp;
  g++ -c -g -Wall -Isrc/ -std=c++17 -o src/file.o src/file.cpp;
  g++ -c -g -Wall -Isrc/ -std=c++17 -o src/main.o src/main.cpp;
  echo "1.2 - Linking the object files to produce bit ..."
  g++ -o bit src/bit.o src/library.o src/compile.o src/args.o src/file.o src/main.o -std=c++17 -lstdc++fs;
  echo "2 - Remove the object files *.o !"
  rm src/*.o;
elif [[ $1 = "-r" ]]; then
  # Compile in release mode
  echo "1 - Compile bit in release mode !"
  echo "1.1 - Compiling the source files ..."
  g++ -c -Wall -Isrc/ -std=c++17 -o src/bit.o src/bit.cpp;
  g++ -c -Wall -Isrc/ -std=c++17 -o src/library.o src/library.cpp;
  g++ -c -Wall -Isrc/ -std=c++17 -o src/compile.o src/compile.cpp;
  g++ -c -Wall -Isrc/ -std=c++17 -o src/args.o src/args.cpp;
  g++ -c -Wall -Isrc/ -std=c++17 -o src/file.o src/file.cpp;
  g++ -c -Wall -Isrc/ -std=c++17 -o src/main.o src/main.cpp;
  echo "1.2 - Linking the object files to produce bit ..."
  g++ -o bit src/bit.o src/library.o src/compile.o src/args.o src/file.o src/main.o -std=c++17 -lstdc++fs;
  echo "2 - Remove the object files *.o !"
  rm src/*.o;
  echo "3 - Moving bit to /usr/local/bin/ !"
  sudo mv bit /usr/local/bin/
fi

