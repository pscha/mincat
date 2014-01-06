normal:
	$(CC) -o cat cat.c

install:
	cp -f /usr/bin/cat /usr/bin/gnucat
	cp -f cat /usr/bin

uninstall:
	rm -f /usr/bin/cat
	mv /usr/bin/gnucat /usr/bin/cat

