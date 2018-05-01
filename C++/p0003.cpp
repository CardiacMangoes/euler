#include <iostream>
#include <cmath>

int main(void) {
	long long oprime = 600851475143;
	long long prime = oprime;
	int i = 0;
	long long ans = 0;
	while (i < prime){
		i++;
		if (prime%i == 0) {
			prime /= i;
			ans = i; 
		}
	}
	printf("%lli\n", ans);
}