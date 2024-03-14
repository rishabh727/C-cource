//there are two type of header file:
//1. systum header file .it is come with compiler

#include<iostream>

//2. User defind header file : itis written by the progrogram
//#include "this.h" //--> this will produce an error if this.h is no present in the current directory


using namespace std;

int main(){
    int a=4, b=5;
    
    cout<<" oprators in c++\n";
    //arthmatic opraotrs
    cout<<"The value of a + b is\n"<<a+b;
    cout<<"\nThe value of a - b is\n"<<a-b;
    cout<<"\nThe value of a * b is\n"<<a*b;
    cout<<"\nThe value of a / b is\n"<<a/b;
    cout<<"\nThe value of a % b is\n"<<a%b;
    cout<<"\nThe value of  ++a  is\n"<<++a;
    cout<<"\nThe value of  b++  is\n"<<--b;
    cout<<endl;
    cout<<endl;

    // assinment oppretor 
    // int c=3, d=9;
    // char d='d' ;

    //comparison operators
    cout<<"the value of a==b is "<<(a==b)<<endl;
    cout<<"the value of a!=b is "<<(a!=b)<<endl;
    cout<<"the value of a>=b is "<<(a>=b)<<endl;
    cout<<"the value of a<=b is "<<(a<=b)<<endl;
    cout<<"the value of a<b is "<<(a<b)<<endl;
    cout<<"the value of a>b is "<<(a>b)<<endl;
       //logical oprator

    cout<<"the value of logical oprators ((a==b) || (a<b) ) is "<<((a==b) || (a<b) )<<endl;
    cout<<"the value of logical oprators ((a==b)&& (a<b) ) is "<<((a==b)&& (a<b) )<<endl;
    cout<<"the value of logical  not oprators ((a==b)&& (a<b) ) is "<<!((a==b)&& (a<b) )<<endl;
    
    


    return 0 ;
}

