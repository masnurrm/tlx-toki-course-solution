#include <iostream>
using namespace std;

int main(){
    int n, i, besar, kecil, arr[100];
    cin>>n;
    for(i=1; i<=n; i++){
        cin>>arr[i];
    }

    besar=arr[1];
    kecil=arr[1];

    for(i=1;i<=n;i++){
        if(besar<arr[i]){
            besar=arr[i];
        }
        if(kecil>arr[i]){
            kecil=arr[i];
        }
    }
    cout<<besar<<" "<<kecil<<endl;
}