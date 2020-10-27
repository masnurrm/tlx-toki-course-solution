#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double N;
	cin>>N;
	if(N == trunc(N)){
        cout<<N<<" "<<N<<endl;
	}
	else if(N>0){
        cout<<trunc(N)<<" "<<trunc(N)+1<<endl;
	}
	else {
        cout<<trunc(N)-1<<" "<<trunc(N)<<endl;
	}
	return 0;
}