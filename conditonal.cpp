#include<iostream>
using namespace std;

int main(){
    // int n;
    // cin>>n;
    // // cout<<"Value of n is "<< n << endl;
    // if(n>0) {
    //     cout<< "A is positive" << endl;
    // }
    // else{
    //     cout<<"A is negetive " << endl;
    // }
    // int a;
    // int b;

    // cin>>a;
    // cin>>b;

    // cout<<"Value of a and b is " << a <<" "<< b << endl;


    // While loop

    // int a;
    // cin>> a;
    
    // int i = 1;
    // while(i<=a){
    //     cout<<i<<" ";
    //     i = i+1;
    // }

    // int n;
    // cin>> n;


    // int sum = 0;
    // int i  = 1;

    // while(i<=n){
    //     sum = sum+i;
    //     i = i+1;
    // }
    // cout<<"Value of sum is"<< sum << endl;

    // return 0;

    // sum of even no from 1 to n.

    // int n;
    // cin>> n;


    // int sum = 0;
    // int i  = 0;

    // while(i<=n){
    //     sum = sum+i;
    //     i = i+2;
    // }
    // cout<<"Value of sum is"<< sum << endl;

    // return 0;

    // prime or not
    int n;
    cin>> n;

    int i = 2;
    while(i<n){
        if(n%i==0){
            cout<<"Not prime for"<< i << endl;
        }
        else{
            cout<<"Prime for"<< i << endl;
        }
        i = i+1;
    }


}