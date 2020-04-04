

run: hello
	gdb hello

hello: hello.c
	gcc -o $@ $^ -g -fno-omit-frame-pointer

clean:
	-rm hello
