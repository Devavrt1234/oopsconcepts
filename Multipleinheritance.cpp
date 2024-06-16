#include<iostream>
using namespace std;


class A{

public:
 
 int data1=10;
 int data2=20;
 int data3=30;

 void printdatamembers(){

    cout<<data1<<" "<<data2<<" "<<data3<<endl;
 }

};


class B{

public:
 
 int data1=20;
 int data2=30;
 int data3=40;

 void printdatamembers(){

    cout<<data1<<" "<<data2<<" "<<data3<<endl;
 }
};


class C:public A,public B{
public:

};


int main(){


C objC;

objC.A::printdatamembers();
objC.B::printdatamembers();

return 0;

}

