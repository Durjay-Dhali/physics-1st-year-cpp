//addition with for loop
#include<iostream>
using namespace std;
int main(){
    int n;
    int sum =0;
    cin>>n;
    for(int i=0;i<=n;i++){
        sum = sum+i;
    }
    cout<<"sum = "<<sum<<endl;
    return 0;
}