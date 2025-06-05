SDL_FLAGS = -I /usr/local/include/SDL2 -D_REENTRANT 
PNG_FLAGS = -I /usr/include/libpng16 -D_REENTRANT 

CFLAGS = $(SDL_FLAGS) $(PNG_FLAGS) -I include

OPTIONS = -fsanitize=address

LIBS = -lSDL2 -lpng

BIN_NAME = asr.so

STATIC_NAME = asr.a

compile:
	clang++ -fPIC $(CFLAGS) -c src/*.cc $(OPTIONS)
	clang++ -shared -fPIC $(LIBS) -o $(BIN_NAME) *.o $(OPTIONS)
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
