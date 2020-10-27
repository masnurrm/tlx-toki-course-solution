#include <string>
#include <cstdio>
#include <iostream>
using namespace std;

char beo[1001];

int main() {
	scanf("%[^\n]\n", beo);
	string s=beo;
	printf("%s\n", s.c_str());
	
	return 0;
}