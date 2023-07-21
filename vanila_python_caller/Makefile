target=run_python

CC=g++
CFLAGS=`python3-config --cflags`
LDFLAGS=`python3-config --embed --ldflags`
LD_LIBRARY_PATH=$(python3-config --prefix)/lib/:$LD_LIBRARY_PATH

all:
	$(CC) $(CFLAGS) -c $(target).cpp
	$(CC) $(target).o -o $(target) $(LDFLAGS)

run:
	./run_python

clean:
	rm -f $(target).o $(target)