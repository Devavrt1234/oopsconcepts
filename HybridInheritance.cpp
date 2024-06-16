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

class B:public A{

};

class D{
public:
 
 int data1=20;
 int data2=30;
 int data3=40;

 void printdatamembers(){

    cout<<data1<<" "<<data2<<" "<<data3<<endl;
 }
};

class C:public A,public D{

};



int main(){


    B objB;
    objB.A::printdatamembers();
    C objC;
    objC.A::printdatamembers();
    objC.D::printdatamembers();
    return 0;
}