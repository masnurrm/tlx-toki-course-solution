#include<iostream>
using namespace std;

int main(){
	int N,k,i,j;
	cin>>N>>k;
	for (i=1;i<=N;i++){
		if(i%k!=0){
		    if(i<(N)){
		        cout<<i<<" ";
		    }
		    else {
		        cout<<i<<endl;
		    }
		}
		else if (i%k==0){
		    if(i<(N)){
		        cout<<"*"<<" ";
		    }
		    else {
		        cout<<"*"<<endl;
		    }
		}
	}
	return 0;
}