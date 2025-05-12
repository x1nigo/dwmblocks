PREFIX  := /usr/local
CC      := cc

dwmblocks: dwmblocks.c config.h
	${CC} -o dwmblocks -lX11 dwmblocks.c

clean:
	rm -f *.o *.gch dwmblocks

install: dwmblocks
	mkdir -p ${DESTDIR}${PREFIX}/bin
	cp -f dwmblocks ${DESTDIR}${PREFIX}/bin
	chmod 755 ${DESTDIR}${PREFIX}/bin/dwmblocks

uninstall:
	rm -f ${DESTDIR}${PREFIX}/bin/dwmblocks

.PHONY: clean install uninstall
