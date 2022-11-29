double my_pow(double x, unsigned int power) {
	double result = 1;
	for (int i = 0; i < power; i++)
		result *= result;
	return result;
}