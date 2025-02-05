#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter any number: ";
    cin>>num;
    int first,last,sum;
    last = num % 10 ;
    while(num >= 10){
        num = num / 10;
        first=num;
    }
    sum=first+last;
    cout<<"The some of the first and last digit: "<<sum;
}

