class Hero1{

private:
    char level='A';

  
    
public:
    int health=100;

      Hero1(){
      this->level='S';
 
      }


// getter 1
virtual char getLevel(){

    return level;
}
// getter 2
int gethealth(){

    return health;
}

void sethealth(){
    health=250;
}

void setlevel(){
    level='B';
}


};