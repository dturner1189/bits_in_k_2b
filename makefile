OUT = bits
OBJECTS = main.cpp

SOURCE_DIR = $(CURDIR)
CC = g++

$(OUT): $(OBJECTS)
	$(CC) -o $(OUT) $^
	rm -rf *.o

%.0: %.c
	$(CC)-c -o $@ $<

clean:
	rm -rf $(OUT)

vjzdsnjkvndsfjvn;kzdv


vdsfkvkjdfvjkdfnvdsvjsdnkv
