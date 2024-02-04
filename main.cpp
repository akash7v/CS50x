#include<iostream>
#include<string>
#include"Postfix.cpp"
using namespace std;
int main(){

    string str = "A+(B*C-(D/E^F)*G)*H";
    cout<<postfix(str)<<endl;
    return 0;
}