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
    Knife(bool stainless = false) :is_stainless(stainless){

    }
    virtual void use() override{
        std::cout << "Stab!" << std::endl;
    }
    bool get_is_stainless() const{
        return is_stainless;
    }

private:
    bool is_stainless;
};

class player{
public:
    void use(Weapon& weapon){
        // dynamic casting
        Knife* knife = dynamic_cast<Knife*>(&weapon);
        if (!knife){
            std::cout << "Not a Knife\n";
        }
        else{
            if (knife->get_is_stainless()){
                std::cout << "Stainless knife: can use it!\n";
                knife->use();
            }
            else{
                std::cout << "Non-stainless knife: Cannot use it!\n";
            }
        }
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
    Knife Karambit_case_hardened_blue_gem(true);
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