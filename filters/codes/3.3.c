# EP20btech11010
#include <stdio.h>

#define N 20

double x(int a) {
	if (a < 0 || a > 5) return 0;
	else if (a < 4) return a + 1;
	else return 6 - a;
}

double y(int a) {
	if (a < 0) return 0;
	else return x(a) + x(a-2) - 0.5 * y(a-1);
}

int main() {
	FILE *fp = fopen("filter_output.dat", "w");
	for (int i = 0; i < N; i++) {
		fprintf(fp, "%lf\n", y(i));
	}
	fclose(fp);
	return 0;
}
