#include<iostream>
using namespace std;
int main(){
    int x,y,a;
    cout<<"Enter a number x: ";
    cin>>x;
    cout<<"Enter a number y: ";
    cin>>y;
    cout<<"Enter operation no. to perform : ";
    cin>>a;
    switch(a){
        case 1: cout<<"Addition of x and y is : "<<x+y;
        break;
        case 2: cout<<"Subtraction of x and y is : "<<x-y;
        break;
        case 3: cout<<"Product of x and y is : "<<x*y;
        break;
        case 4: cout<<"Qoutient of x and y is : "<<x/y;
        break;
        case 5: cout<<"Remainder of x and y is : "<<x%y;
        break;
        default: cout<<"Enter correct operation no.";
        break;

    }
    return 0;

}