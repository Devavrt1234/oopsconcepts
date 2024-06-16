#include <iostream>
#include <cstring> // for strcpy and strlen

class ShallowCopy {
public:
    char* data;

    // Constructor
    ShallowCopy(const char* input) {
        data = new char[strlen(input) + 1];
        strcpy(data, input);
    }

    // Copy Constructor (Shallow Copy)
    ShallowCopy(const ShallowCopy& source) : data(source.data) {
        std::cout << "Shallow copy constructor called" << std::endl;
    }

    // Destructor
    ~ShallowCopy() {
        delete[] data;
    }

    void print() const {
        std::cout << "Data: " << data << std::endl;
    }
};

class DeepCopy {
public:
    char* data;

    // Constructor
    DeepCopy(const char* input) {
        data = new char[strlen(input) + 1];
        strcpy(data, input);
    }

    // Copy Constructor (Deep Copy)
    DeepCopy(const DeepCopy& source) {
        data = new char[strlen(source.data) + 1];
        strcpy(data, source.data);
        std::cout << "Deep copy constructor called" << std::endl;
    }

    // Destructor
    ~DeepCopy() {
        delete[] data;
    }

    void print() const {
        std::cout << "Data: " << data << std::endl;
    }
};

int main() {
    // Shallow Copy Example
    ShallowCopy obj1("Shallow");
    ShallowCopy obj2 = obj1; // This will invoke shallow copy constructor

    std::cout << "Shallow Copy:" << std::endl;
    obj1.print();
    obj2.print();

    // Modifying obj1 will affect obj2 since it's a shallow copy
    obj1.data[0] = 's';
    std::cout << "After modifying obj1:" << std::endl;
    obj1.print();
    obj2.print();

    // Deep Copy Example
    DeepCopy obj3("Deep");
    DeepCopy obj4(obj3); // This will invoke deep copy constructor

    std::cout << "Deep Copy:" << std::endl;
    obj3.print();
    obj4.print();

    // Modifying obj3 will not affect obj4 since it's a deep copy
    obj3.data[0] = 'd';
    std::cout << "After modifying obj3:" << std::endl;
    obj3.print();
    obj4.print();

    return 0;
}
