unsigned int Problem1() {
	unsigned int s = 0;
	for (unsigned int i = 1; i < 1000; ++i) 
		if (i % 3 == 0 || i % 5 == 0) 
			s += i;
	return s;
}
