CC = gcc
target = ProjectEuler
object = main.o math/linkedList.o arch/001.o

$(target):$(object)
	$(CC) $(object) -o $(target)

main.o:main.c arch/arch.h
	$(CC) -c main.c -o main.o

001.o:arch/001.c arch/arch.h
	$(CC) -c arch/001.c -o arch/001.o

linkedList.o:math/linkedList.c math/linkedList.h 
	gcc -c math/linkedList.c -o math/linkedList.o


clean:
	rm -rf  $(object) $(target)