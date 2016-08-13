CC = gcc
target = ProjectEuler
object = main.o math/linkedList.o arch/001.o desc/desc.o

$(target):$(object)
	$(CC) $(object) -o $(target)

main.o:main.c arch/arch.h
	$(CC) -c main.c -o main.o

linkedList.o:math/linkedList.c math/linkedList.h 
	$(CC) -c math/linkedList.c -o math/linkedList.o

desc.o:desc/desc.c
	$(CC) -c desc/desc.c -o desc/desc.o

001.o:arch/001.c
	$(CC) -c arch/001.c -o arch/001.o

clean:
	rm -rf  $(object) $(target)
