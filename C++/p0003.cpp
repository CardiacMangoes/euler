#include <iostream>
#include <cmath>

int main(void) {
	long long oprime = 600851475143;
	long long prime = oprime;
	int i = 0;
	long long ans = 0;
	while (ans < (oprime/2)+1 && i < prime){
		i++;
		if (prime%i == 0) {
			prime /= i;
			ans = i; 
		}
		printf("%lli, %lli\n", ans, prime);
	}
	printf("%lli\n", ans);
}