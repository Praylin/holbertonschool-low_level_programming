all: libholbertonschool.a

libholbertonschool.a: *.o
	ar rc libholbertonschool.a *.o
	ranlib libholbertonschool.a

*.o : src/*.c
	gcc -c src/*.c

clean:
	rm libholbertonschool.a
	rm *.o

re:
	ar rc libholbertonschool.a *.o
	ranlib libholbertonschool.a
