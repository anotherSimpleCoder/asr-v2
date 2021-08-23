SDL_FLAGS = -I /usr/include/SDL2 -D_REENTRANT 

CFLAGS = $(SDL_FLAGS) -I include

OPTIONS = -fsanitize=address

LIBS = -lSDL2

BIN_NAME = asr.so

compile:
	g++ -fPIC $(CFLAGS) -c src/*.cpp $(OPTIONS)
	g++ -shared -fPIC $(LIBS) -o $(BIN_NAME) *.o $(OPTIONS)
	rm *.o

remove:
	rm $(BIN_NAME)
	clear

clean:
	rm *.o
	clear
