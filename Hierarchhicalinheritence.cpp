#include<iostream>
using namespace std;

class ClassA{

public:
   int data1=10;
   int data2=20;
   int data3=30;


   void printdatamembers(){

    cout<<data1<<endl;
    cout<<data2<<endl;
    cout<<data3<<endl;
   }


};

class ClassB:public ClassA{

public:



};

class ClassC:public ClassA{

public:



};
int main(){

    ClassA ObjA;
    ClassB ObjB;
    ClassC ObjC;

    ObjC.printdatamembers();
    ObjB.printdatamembers();
    return 0;
}