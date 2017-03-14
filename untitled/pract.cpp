#include <iostream>
#include <bitset>

using namespace std;
string s;
string result, result1;
int arr[1];
int n,q, sum, i;

int changeBit(int q){
    int fQuery[1];      //q-1
    for(int i=0; i<q-1; i++){
        cin>>fQuery[i];
    }
    return fQuery[1];
}

void sQuery(){

}

string flip(){
    s = bitset<3>(arr[0]).to_string()+bitset<2>(arr[1]).to_string();
    if(s[arr[1]-1]=='0'){
        s[arr[1]-1]='1';
    }
    else if(s[arr[1]-1]=='1'){
        s[arr[1]-1]='0';
    }
    return string(s);
}

string checkEvenOdd(int number){
    if(number%2==0){
      result = "Even";
    }
    else{
        result = "Odd";
    }
    return result;
}

int main(){
    cout<<"enter 2 numbers";
    cin>>n>>q;
    arr[0]=n;
    arr[1]=q;

    string str = flip(); //calling flip function

    for(int i =0; i<(str.length()-1); i++){
        result1 += s[i];
    }
    int number = stoi(result1, nullptr, 2); // converting binary into integer
    result = checkEvenOdd(number); // calling checkEvenOdd function
    cout<<result<<endl;
}



