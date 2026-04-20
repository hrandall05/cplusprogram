#include <iostream>\

// abstract class
class Weapon{
    public:
    virtual void use() = 0; // abstract method
};
class Gun: public Weapon{
public:
    void use() override{
        std::cout << "Bang!" << std::endl;
    }


};

class Shotgun: public Gun{
public:
    void use() override{
        std::cout << "Boom!" << std::endl;
    }
};

class Machinegun: public Gun{
public:
    Machinegun() :magazine(20){

    }
    void use() override{
        while(magazine > 0){
            std::cout << "Bang!" << std::endl;
            --magazine;
        }
        std::cout <<"click!" << std::endl;
    }
    void reload(){
        magazine = 30;
    }
private:
    int magazine;

};

class Knife : public Weapon{
public:
    virtual void use() override{
        std::cout << "Stab!" << std::endl;
    }
};

class player{
public:
    void use(Weapon& weapon){
        weapon.use();
    }
    
};
class Johnwick: public player{
public:
    void use(Machinegun& mg){
        while(true){
            mg.use();
            mg.reload();
        }
        
    }
};


int main(){
    Gun gun;
    Machinegun mg;
    Shotgun boomstick;
    Knife Karambit_case_hardened_blue_gem;
    player p;

    Johnwick babayaga;

    Weapon* weapons[4] = {&gun, &mg, &boomstick, &Karambit_case_hardened_blue_gem};
    

    for (int i = 0; i < 4; ++i){
        weapons[i]->use();
    }
    mg.reload();

    p.use(gun);
    p.use(mg);
    p.use(boomstick);
    p.use(Karambit_case_hardened_blue_gem);
    return 0;
}