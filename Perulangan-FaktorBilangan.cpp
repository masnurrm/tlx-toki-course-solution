#include <iostream>
using namespace std;

int main(){
    int n, i;
    cin>>n;
    for(i=n;i>=1;i--){
        if(n%i==0){
            cout<<i<<endl;
        }
    }

    return 0;
}