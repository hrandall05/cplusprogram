#include<iostream>

class Character{
public:
    Character(int hp = 100) :hp(hp){
        std::cout << "Character's constructor\n";
    }

    int hp;
};
class Elf : virtual public Character{
public:
    Elf(){
        std::cout << "I am an Elf!\n";
    }
    void think(){
        std::cout << "Lets not fight" << std::endl;
    }
};

class Warrior : virtual public Character{
public:
    Warrior(){
        std::cout << "I am a Warrior!\n";
    }
    void fight(){
        std::cout << "Slash!!!" << std::endl;
    }
};

class ElvenWarrior : public Elf, public Warrior{
public:
    ElvenWarrior(int hp = 100) : Character(hp){
        
    }

};

int main(){
    ElvenWarrior legolas(150);
    legolas.fight();
    legolas.think();

    std::cout << "HP: " << legolas.hp << std::endl; //diamond problem solved by virtual inheritance

    return 0;
}