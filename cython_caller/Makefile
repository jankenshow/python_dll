target=caller
cybridge=quack

CC=g++
CFLAGS=`python3-config --cflags`
LDFLAGS=`python3-config --embed --ldflags`

LIB_PYTHON=`python3-config --prefix`

all:
	cython -3 $(cybridge).pyx
	$(CC) $(CFLAGS) -I. -c *.c
	$(CC) *.o -o $(target) $(LDFLAGS)

run:
	LD_LIBRARY_PATH=$(LIB_PYTHON)/lib/:${LD_LIBRARY_PATH} ./caller

clean:
	rm -f $(cybridge).c $(cybridge).h $(cybridge).o $(target).o $(target)
	rm -rf __pycache__