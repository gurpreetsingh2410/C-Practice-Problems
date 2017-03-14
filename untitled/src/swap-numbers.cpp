#include <iostream>
using namespace std;
int main(){
    int a,b,temp;
    cout<<"Enter First number";
    cin>>a;
    cout<<"Enter Second number";
    cin>>b;
    cout<<"Before swapping numbers are, a = "<<a<<"     b = "<<b<<endl;
    temp = a;
    a = b;
    b = temp;
    cout<<"Swapped number are , a = "<<a<<"     b = "<<b;
}
