CC=gcc
CFLAGS=-Wall

part2: part2_parent part2_child

part2_parent: part2_parent.c
	$(CC) $(CFLAGS) -o part2_parent part2_parent.c

part2_child: part2_child.c
	$(CC) $(CFLAGS) -o part2_child part2_child.c

clean:
	rm -f part2_parent part2_child
