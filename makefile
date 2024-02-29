

build/theanswer: build/radice.o build/potenza.o tools/main.cpp 
	g++ -std=c++14 tools/main.cpp -I include build/radice.o build/potenza.o -o build/theanswer

build/radice.o: include/root.hpp src/radice.cpp
	g++ -std=c++14 -c src/radice.cpp -I include -o build/radice.o

build/potenza.o: include/root.hpp src/potenza.cpp
	g++ -std=c++14 -c src/potenza.cpp -I include -o build/potenza.o
	
clean:
	rm -rf build/*.o
	rm -rf build/theanswer