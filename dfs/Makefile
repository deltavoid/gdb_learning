

run: dfs
	gdb dfs

dfs: dfs.c
	gcc -o $@ $^ -g -fno-omit-frame-pointer

clean:
	-rm dfs
