test: main-1-1.cpp Vehicle.cpp Car.cpp Bus.cpp Motorbike.cpp Vehicle.h Car.h Bus.h Motorbike.h
	g++ -o test main-1-1.cpp Vehicle.cpp Car.cpp Bus.cpp Motorbike.cpp 

run:
	./test