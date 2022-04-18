#include<iostream>
using namespace std;

bool primeNo(int n){
    for(int i =2; i<n; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){

    int n;
    cout<<"Enter the value of N : ";
    cin>>n;

    cout<<primeNo(n);
}