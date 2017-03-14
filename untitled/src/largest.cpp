#include <iostream>
using namespace std;
void largest(int a , int b){
    if(a>b){
        cout<<"A is greater";
    }
    else{
        cout<<"B is greater";
    }
}
int main(){
    int n1, n2;
    cout<<"Enter first number A= ";
    cin>>n1;
    cout<<"Enter Second number B= ";
    cin>>n2;
    largest(n1, n2);
}

