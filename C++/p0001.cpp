#include <iostream>
#include <cmath>

int main(void) {
	int limit = 1000;
	int total = 0;

	for(int i = 0; i < limit; i++) {
		if(i % 3 == 0 || i % 5 == 0) {
			total += i; }
	}
	printf("%d\n", total);
}