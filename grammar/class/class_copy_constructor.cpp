
#include <iostream>


class Pos
{
private:
    int x;
    int y;
public:
    Pos(int tempx, int tempy);
    Pos(const Pos& pos);
    ~Pos();
};

// keywords like "inline" is called "modifier" or "specifier"
// "inline" modifier tells compiler to copy its difinition into inside of class difinition.
// it can reduce overhead when this function is called.
inline Pos::Pos(int tempx, int tempy){      // constractor
    std::cout << "called constractor" << std::endl;
    x = tempx;
    y = tempy;
}

// argument needs Pos so its copy constructor
inline Pos::Pos(const Pos& pos){        // copy constructor
    std::cout << "called copy constractor" << std::endl;
    x = pos.x;
    y = pos.y;
}

inline Pos::~Pos(void){
    std::cout << "called destractor" << std::endl;
}


int main(){
    int a = 5;

    std::cout << "make instance obj1" << std::endl;
    Pos obj1(1, 2);

    std::cout << "make obj2 by copying from obj1 with copy constructor" << std::endl;
    Pos obj2 = obj1;

    std::cout << "copy obj2 to obj1 by using copy operation" << std::endl;
    obj1 = obj2;

    std::cout << "finish main loop" << std::endl;


    return 0;
}



