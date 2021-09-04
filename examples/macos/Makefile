ASR_FLAGS = -I include -D_REENTRANT

compile:
	clang++ $(ASR_FLAGS) -c main.cpp asr.dylib
	clang++ asr.dylib -o main main.o
	rm *.o
