double my_pow(double x, int power) {
	bool fl = false;
	if (power < 0) {
		power = -power;
		fl = true;
	}
	double result = 1;
	for (int i = 0; i < power; i++)
		result *= result;

	return fl ? 1 / result : result;
}