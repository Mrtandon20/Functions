#include <iostream>
using namespace std;\

int power(int x , int n){

    int ans=1;

    while(n!=0){
        ans = ans*x;
        n--;
    }
    return ans;
}

int main(){
    int x;
    cout<<"Enter the value of Number :";
    cin>>x;

    int n;
    cout<<"Enter the value of power : ";
    cin>>n;

    cout<<power(x , n);

    

}