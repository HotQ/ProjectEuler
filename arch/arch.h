#ifndef ARCH_H_INCLUDED
#define ARCH_H_INCLUDED

#define SolvedRange 1

int IDxxx(int);
int ID001();

static int (*listSolved[SolvedRange])()={
	ID001
};
#endif // ARCH_H_INCLUDED
