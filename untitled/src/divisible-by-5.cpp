#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter any number to check it is divisble by 3 or 5";
    cin>>num;
    if(num%3==0 && num%5 == 0){
        cout<<"Number is divisble by 3 and 5";
    }

    else if (num%3==0){
        cout<<"Num is divisible by 3";
    }
    else if(num%5==0){
        cout<<"Number is divisible by 5";
    }
    else{
        cout<<"Number is not divisible by 3 or 5";
    }
}
