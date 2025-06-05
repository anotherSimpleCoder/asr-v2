SDL_FLAGS = -I /usr/local/include/SDL2 -D_REENTRANT 
PNG_FLAGS = -I /usr/local/include/libpng16 -D_REENTRANT

CFLAGS = $(SDL_FLAGS) $(PNG_FLAGS) -I include

OPTIONS = -fsanitize=address

LIBS = -lSDL2 -lpng

BIN_NAME = asr.dylib

STATIC_NAME = asr-v2.a

compile:
	clang++ -fPIC $(CFLAGS) -c src/*.cc $(OPTIONS)
	clang++ $(LIBS) -dynamiclib -fPIC -o $(BIN_NAME) *.o $(OPTIONS)
	rm *.o

compileStatic:
	clang++ $(CFLAGS) -c src/*.cc $(OPTIONS)
	ar rvc $(STATIC_NAME) *.o
	rm *.o

remove:
	rm $(BIN_NAME)
	clear

clean:
	rm *.o
	clear
