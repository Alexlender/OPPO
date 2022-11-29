double my_pow(double x, unsigned int power) {

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
	return result;
}