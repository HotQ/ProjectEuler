unsigned int Problem2() {
	unsigned int p = 1, q = 2,
		s = 0;
	while (q <= 4000000) {
		if (q % 2 == 0) s += q;
		q = p + q;
		p = q - p;
	}
	return s;
}
