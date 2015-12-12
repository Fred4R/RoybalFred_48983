
/* 
 * File:   Fight1.h
 * Author: Fred Roybal IV
 *
 * Created on December 12, 2015, 8:53 AM
 */

#ifndef FIGHT1_H
#define FIGHT1_H

class Fight1 {
    
private:
    short pHp;
    
public:
    Fight1();                           //Constructor
    
    short setPhp(int);                  //Enemy Health Points
    short getPhp() const;               //Retrieves Enemy Health
    
    Fight1();
    Fight1(const Fight1& orig);
    
    ~Fight1();                           //Deconstructor
};

//Initialize starting enemy health

Fight1::Fight1(){
    
    pHp=70;
    
}

//Sets Player Health Points
short Fight1::setPhp(int x){
    
    
    pHp=x;
    
    if{php>71}{
        cout<<"ERROR: Enemy HP is above what it is supposed to be"<<endl;
        exit(EXIT_FAILURE);
        
              }
}

short Fight1::getPhp() const {
    
    
    return pHp;
    
}

#endif /* FIGHT1_H */

