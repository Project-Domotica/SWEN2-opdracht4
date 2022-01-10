g++ -Wall -pg -ftest-coverage -fprofile-arcs -c main.cpp
g++ -Wall -pg -ftest-coverage -fprofile-arcs -o main.exe main.cpp
main.exe
gprof main.exe gmon.out>analyse.txt
gcov main.exe