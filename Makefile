SDL_FLAGS = -I /usr/local/include/SDL2 -D_REENTRANT 
PNG_FLAGS = -I /usr/include/libpng16 -D_REENTRANT 

CFLAGS = $(SDL_FLAGS) $(PNG_FLAGS) -I include

OPTIONS = -fsanitize=address

LIBS = -lSDL2 -lpng

BIN_NAME = asr.so

compile:
	clang++ -fPIC $(CFLAGS) -c src/*.cpp
	clang++ -shared -fPIC $(LIBS) -o $(BIN_NAME) *.o
	rm *.o

remove:
	rm $(BIN_NAME)
	clear

clean:
	rm *.o
	clear
