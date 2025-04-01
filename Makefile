CXX = g++
CFLAGS = -g -c
objects = src/WordleGame.cpp src/main.cpp




all: build clean


build: src/main.cpp src/WordleGame.cpp
	$(CXX) $(CFLAGS) src/main.cpp -o build/main.o
	$(CXX) $(CFLAGS) src/WordleGame.cpp -o build/WordleGame.o
	cd build && $(CXX) main.o WordleGame.o -o main

clean:
	rm -rf build/*.o


run: all build/main
	build/main
