#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int a,b,c,d, jarak;
	cin>>a>>c>>b>>d;
	jarak=abs(a-b)+abs(c-d);
	cout<<jarak<<endl;
	return 0;
}