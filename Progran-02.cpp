//inline function
#include<iostream>
using namespace std;
 
 class line
 {
 
 public:
     inline float mul(float x,float y){
      return(x*y);
 };
 
 inline float cube (float x)
 {
     return(x*x*x);
 };

 void main(){
     line obj;
     float num1 ,num2;

     cout<<"Enter two numbers:";
     cin>>num1>>num2;
     cout<<"\n Multiplication value is:" <<obj.mul(num1,num2);
     cout<<"\n Cube value is:"<<obj.cube(num1);

 };
 
