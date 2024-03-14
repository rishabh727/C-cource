//Refrence variable & typecasting


#include<iostream>

using namespace std;
int c=55;// this is a global variable.

int main(){

    // int a, b, c;
    // cout<<"enter the value of a :"<<endl;
    // cin>>a;
    // cout<<"enter the value of b :"<<endl;
    // cin>>b;
    // c= a+b ;
    // cout<<"the sum is "<<c<<endl;

    // cout<<"the global c is :" <<::c<<endl;// :: this is a scope resolutation oprator

    //  *************build in data type*****************

    // float d=34.4F;
    // long double e= 34.4L;
    // cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
    // cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
    // cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
    // cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;
    // cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;


//  *************Refrance Variables*****************
//ex. suraj-------->addu--------->katli( multiple name of one variable)
    // float x=455;
    // float & y =x;
    // cout<<y<<endl;
    // cout<<x<<endl;


//  ***************typecasting*****************

  int a= 45;
  float b=45.55;
  cout<<"the value of a is "<<float(a)<<endl;
  cout<<"the value of b is "<<int(b);



    return 0;
}
