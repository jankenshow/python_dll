target=run_python

CC=g++
CFLAGS= `python3-config --cflags`
LDFLAGS=`python3-config --embed --ldflags`

all:
	$(CC) $(CFLAGS) -c $(target).cpp
	$(CC) $(target).o -o $(target) $(LDFLAGS)

run:
	LD_LIBRARY_PATH=/home/suzuki/.pyenv/versions/3.11.4/lib/:$LD_LIBRARY_PATH ./run_python

clean:
	rm -f $(target).o $(target)