#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number to check";
    cin>>num;
    if(num>10){
        cout<<"Number is greater than 10";
    }
    else if(num == 10){
        cout<<"Number is equal to 10";
    }
    else {
        cout<<"Number is less than 10";
    }
}
