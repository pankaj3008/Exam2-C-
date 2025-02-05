#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter any number: ";
    cin>>num;
    int count = 0;
    while(num > 0 || num < 0){
        num = num / 10;
        count++;
    }
    cout<<"Total number of digits: "<<count;
}