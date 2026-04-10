#include <iostream>

template<typename T1, typename T2>
class Pair{
    public:
    Pair(const T1& f, const T2& s): first(f), second(s){

    }
    //getters
    T1 getFirst() const{
        return first;
    }
    T2 getSecond() const{
        return second;
    }
    // setters
    void setFirst(const T1& first){
        this->first = first;
    }
    void setSecond(const T2& second){
        this->second = second;
    }
    
    void print() const{
        std::cout<< "(" << getFirst()<<", "<<getSecond()<<")\n";
    }

    private:
    T1 first;
    T2 second;
};

//create a function that takes 2 arguments of any type
// returns the pair of those arguments
template<typename T1, typename T2>
Pair<T1,T2> createPair(const T1& f, const T2& s){
    return Pair<T1,T2>(f,s);
}

int main(){
    //create pair object
    Pair<int,double> p1(1,1.3);
    p1.print();

    Pair<std::string, char> p2 = createPair(std::string("hello"), '!');
    p2.print();

    auto p3 = createPair('a', 1);
    p3.print();
    
    return 0;
}