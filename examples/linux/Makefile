ASR_FLAGS = -I include -D_REENTRANT

compile:
	clang++ $(ASR_FLAGS) -c main.cpp asr2.so
	clang++ asr2.so -o main main.o
	rm *.o
