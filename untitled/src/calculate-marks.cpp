#include <iostream>
using namespace std;

float calculate(int mark1, int mark2, int mark3){
    return (mark1+mark2+mark3)/3;
}
int main(){
    int roll, marks1, marks2 , marks3;
    cout<<"Please Enter Your Roll Number ";
    cin>>roll;
    cout<<"Enter your marks in 3 subjects ";
    cin>>marks1>>marks2>>marks3;
    cout<<"Your Average Marks is "<<calculate(marks1, marks2, marks3);
}
