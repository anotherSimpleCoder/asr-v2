ASR_FLAGS = -I include -D_REENTRANT

compile:
	clang++ $(ASR_FLAGS) -c main.cpp
	clang++ -o main main.o asr2.dylib
	rm *.o
