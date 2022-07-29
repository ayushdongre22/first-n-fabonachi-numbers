#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=0,c=1;
    int z=c;
    while(z<=n){
        cout<<z<<endl;
        z=a+c;
        a=c;
        c=z;
    }
    return 0;
}
