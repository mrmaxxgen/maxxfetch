all: maxxfetch

maxxfetch: maxxfetch.cpp
	gcc -march=native -O2 -pipe maxxfetch.cpp -o maxxfetch

install: maxxfetch
	mv maxxfetch /usr/local/bin/maxxfetch
