
class Hero{

// nothing here
private:

int health;
float health1;
char level;
// char can be reead without greedy alignment or structure padding
// greedy alignment is done by compiler 
// class is the extention of structure
// Structure padding is the addition of some empty bytes of memory in the structure to naturally align the data members on their natural boundaries
// Structure padding is done by the compiler to optimize the performance of the CPU, as it can access the data members faster if they are aligned on their natural boundaries
// #pragma pack(1) forces compiler for structre packing means no greedy alignment will be performed


public:
Hero(int health ,char level){
this->health=health;
this->level=level;
}

// Hero(Hero temp){
//     this->health=temp.health;
//     this->level=temp.level;

// accessing any object by value in any parameter object like temp will lead to infinite loop

// so we need to receive object by reference in temp object
// my copy constructor
Hero(Hero &temp){
    this->health=temp.health;
    this->level=temp.level;
}
void setlevel(char level){
    this->level=level;
}

//  Constructor overloading allows you to define multiple constructors with different parameters. Each constructor will perform a different task or initialize the object in a different way, depending on the arguments passed to it.




char getLevel(){
    
    return level;
}

int gethealth(){
    return health;
}



};

