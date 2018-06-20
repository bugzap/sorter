To compile:

g++ -std=c++11 -Isrc/ main.cpp src/sorter.cpp test/gtest.cpp src/insertion_sort.cpp /usr/lib/libgtest.a -lpthread -o main