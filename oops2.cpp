#include<iostream>
#include "opps1.cpp"
#include "oops3.cpp"
using namespace std;



int main(){

//   static allocation for object creation
    // Hero h1('G');
    Hero h1(100,'H');
    cout<<h1.getLevel()<<endl;
    cout<<h1.gethealth()<<endl;
    Hero1 h2;

// dynamic allocation for object creation

Hero1 *h3=new Hero1();

cout<<"health using pointer object"<<h3->gethealth();

     
    cout<<"To Keep track of the class"<<endl;
    
    cout<<"Empty class Size: "<<sizeof(h1) <<" Byte"<<endl;
    cout<<"size of h2 object:"<<sizeof(h2)<<endl;

    cout<<h2.health<<endl;
    h2.sethealth();
    cout<<h2.gethealth()<<endl;
    // cout<<h2.level<<endl;
    // level is inaccessible outside class Hero1 it is private data member of class Hero1 use getter setter functions instead

    // h2.setlevel();
    cout<<h2.getLevel()<<endl;   
    Hero1 h4;
    // 
    cout<<h4.getLevel()<<endl;

    Hero1 *h5=new Hero1();
    cout<<h4.getLevel()<<endl;


    
    Hero S(70,'C');
    cout<<S.gethealth()<<endl;
    cout<<S.getLevel()<<endl;
    Hero R(S);
    // default copy costructor is called created by  compiler
    //  A constructor that creates a new object as a copy of an existing object is called copy constructor
    R.setlevel('K');
    cout<<R.gethealth()<<endl;
    cout<<R.getLevel()<<endl;

   Hero V(S);
   V.setlevel('F');
   cout<<"my copy constructor is called"<<endl;
   cout<<V.gethealth()<<endl;
   cout<<V.getLevel()<<endl;

   
    return 0;
}
// constructor is invoked when object is created which is not visible intially
// called default constructor
// class object created by user either dynamically or statically will invoke the user written or default constructor
// when class template is used then contructor creted
// constructor or destructor can not return value they only can set value to datamembers.
// when we write our own constructor then default constructor is removed by compiler it won't be invoked
// this pointer stores the address of the current object 
