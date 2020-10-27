#include <cstdio>
#include <iostream>
using namespace std;

int main() {
	int n,m,bagi,sisa;
	scanf("%d %d", &n, &m);
	bagi=n/m;
	sisa=n % m;
	printf("masing-masing %d\n", bagi);
	printf("bersisa %d\n", sisa);
	return 0;
}