#include<iostream>
using namespace std;

class A{

public:
int a;
int b;



void operator+(A &obj){

    int value1=this->a;
    cout<<value1<<endl;
    int value2=obj.a;
       cout<<value2<<endl;
    cout<<"output"<<value2-value1<<endl;
}


void fun(string c){

    cout<<"Hi There"<<" "<<c<<endl;
}

int fun(int num){

  cout<<num<<endl;  
}

int fun(int num1,int num2){
    cout<<num1<<num2<<endl;
}
};


int main(){

A obj;
obj.fun("deep");


A obj1,obj2;

obj1.a=4;
obj2.a=7;

obj1+obj2;

return 0;
}


// compile time polymorphism->static polymorphism
// runtime polymorphism->dynamic polymorphism
