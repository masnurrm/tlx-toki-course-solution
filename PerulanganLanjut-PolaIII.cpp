#include<iostream>
using namespace std;

int main(){
	int a, b, c, d, e=-1;

	cin>>a;

	for(b=1;b<=a;b++){
        for(c=1;c<=b;c++){
            e=e+1;
            if(e==10){
                e=0;
            }
            cout<<e;
        }
        cout<<endl;
	}

	return 0;
}
