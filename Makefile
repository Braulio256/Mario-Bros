bin/mario : src/mario.cpp include/*
	c++ src/mario.cpp -o bin/mario -I include -lcurses

run : bin/mario
	./bin/mario