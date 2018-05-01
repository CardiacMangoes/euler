#include <iostream>
#include <cmath>

int main(void) {
	int f = 0;
	int f1 = 0;
	int f2 = 1;
	int sum = 0;
	for(int i = 0; f < 4000000; i++) {
		f = f1;
		f1 = f2;
		f2 += f;
		if (f%2 == 0){
			sum += f;
		}
	}
	printf("%d\n", sum);
}