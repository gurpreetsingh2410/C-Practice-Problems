#include <iostream>
#include <zconf.h>

using namespace std;
int main(){
    float P, R, T;
    cout<<"Find simple interest with us";
    cout<<"Enter principal amount";
    cin>>P;
    cout<<"Enter Rate of interest";
    cin>>R;
    cout<<"Enter Time in years";
    cin>>T;
    cout<<"Calculating Simple Interest..... "<<endl;
    usleep(1000*1000*3);
    cout<<"Simple interest is "<<(P*T*R)/100;
}

