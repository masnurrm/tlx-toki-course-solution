#include <iostream>
using namespace std;

int main()
{
    int n, i, b[1001], sum=0;
    cin>>n;
    for (i=1; i<=n;i++){
        cin>>b[i];
        sum=sum+b[i];
    }
    cout<<sum<<endl;
    return 0;
}