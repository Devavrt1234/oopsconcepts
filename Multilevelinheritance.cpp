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

class C:public B{

};

int main(){


    B objB;
    C objC;

    objB.printdatamembers();
    cout<<endl;
    objC.printdatamembers();
}