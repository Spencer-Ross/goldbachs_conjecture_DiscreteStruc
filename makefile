main: pa2.215.o askUsr.o GoldbCon.o isprime.o mkList.o mkPrime.o mkTxt.o printSum.o usrMsg.o prime.h vars.h
	gcc -o main pa2.215.o askUsr.o GoldbCon.o isprime.o mkList.o mkPrime.o mkTxt.o printSum.o usrMsg.o
pa2.215.o: pa2.215.c prime.h vars.h
	gcc -c pa2.215.c
mkTxt.o: mkTxt.c prime.h
	gcc -c mkTxt.c
askUsr.o: askUsr.c prime.h
	gcc -c askUsr.c
GoldbCon.o: GoldbCon.c prime.h
	gcc -c GoldbCon.c
isprime.o: isprime.c prime.h
	gcc -c isprime.c
mkList.o: mkList.c prime.h
	gcc -c mkList.c
mkPrime.o: mkPrime.c prime.h
	gcc -c mkPrime.c
printSum.o: printSum.c prime.h
	gcc -c printSum.c
usrMsg.o: usrMsg.c prime.h
	gcc -c usrMsg.c
clean:
	rm *.o
tar:
	tar cvf pa2.215.tar pa2.215.c pa2_sums mkTxt.c askUsr.c GoldbCon.c isprime.c mkList.c mkPrime.c printSum.c usrMsg.c prime.h vars.h main makefile
gzip:
	gzip pa2.215.tar
tgz:
	mv pa2.215.tar.gz pa2.215.tgz
DEBUG:
	gcc -g -o main pa2.215.c askUsr.c GoldbCon.c mkTxt.c isprime.c mkList.c mkPrime.c printSum.c usrMsg.c
