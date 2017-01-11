#ifndef INTEGER_H_INCLUDED
#define INTEGER_H_INCLUDED

class Integer
{
private:
	unsigned int sign : 1;
	unsigned int zero : 1;
	unsigned int init : 1;
	unsigned int byte : 29;

	char *data;
public:
	Integer();
	Integer(int temp);

	void print();
};

#endif // !INTEGER_H_INCLUDED