#include <iostream>
using namespace std;

int main(){
	int N;
	cin>>N;
	if (0<N && N<=9){
		cout<<"satuan"<<endl;}
    else if (9<N && N<=99){
		cout<<"puluhan"<<endl;}
	else if (99<N && N<=999){
		cout<<"ratusan"<<endl;}
	else if (999<N && N<=9999){
		cout<<"ribuan"<<endl;}
	else if (9999<N && N<=99999){
		cout<<"puluhribuan"<<endl;}
}