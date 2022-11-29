double my_pow(double x, int power) {
	bool fl = false;
	if (power < 0) {
		power = -power;
		fl = true;
	}
	double result = 1;
    while (power > 0) {
        if (power % 2 == 0) {
            power /= 2;
            x *= x;
        }
        else {
            power--;
            result *= x;
        }
    }
    return fl ? 1 / result : result;
}