#include <iostream>
using namespace std;

int factorial(int n){
    int ans =1;
    for(int i=2; i<=n; i++){
     ans = ans*i;
    }
    return ans;
}


int main(){
    int n;
    cout << "Enter the value of N : ";
    cin>>n;
    cout<<"Factorial of  NO : "<<factorial(n);
}