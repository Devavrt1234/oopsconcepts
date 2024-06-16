#include<iostream>
using namespace std;


class Human{

 public:
    int height=6;
    int weight=75;
    int age=24;


    int getAge(){
        return this->age;
    }

    int setWeight(int w){
        this->weight=w;
    }




};

class Male:public Human{
    public:
    string color;

    void sleep(){
        cout<<"male is sleeping"<<endl;
    }
   

};


int main(){
    Human object;
    Male object1;
    cout<<object1.age<<endl;
    cout<<object1.weight<<endl;
    cout<<object1.height<<endl;

    cout<<object1.color<<endl;
    object1.setWeight(84);
    cout<<object1.weight<<endl;
    cout<<object.getAge()<<endl;
    object1.sleep();

    return 0;

}