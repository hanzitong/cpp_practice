
/*
for using copy constractor, we need to be careful about difference of deep copy and sharow copy.
deep copy: duplicate whole resources which pointer is pointing.
shalow copy: copy only pointer's address. 


*/

// not enough enderstand for shalow copy & deep copy yet..............


#include <iostream>

class Pos
{
public:
    int x;
    int y;
    Pos(int tempx, int tempy);
    Pos(const Pos& pos);
    ~Pos();
};


// normal constractor
Pos::Pos(int tempx, int tempy){      // constractor
    std::cout << "called constractor" << std::endl;
    x = tempx;
    y = tempy;
}

// copy constractor
// argument needs Pos it's own instance so its copy constructor.
Pos::Pos(const Pos& pos){        // copy constructor
    std::cout << "called copy constractor" << std::endl;
    x = pos.x;
    y = pos.y;
}

// destractor
Pos::~Pos(void){
    std::cout << "called destractor" << std::endl;
}


int main(){
    int a = 5;

    std::cout << "make instance obj1" << std::endl;
    Pos obj1(1, 2);
    std::cout << "check obj1's variables x:" << obj1.x << ", y:" << obj1.y << std::endl;

    std::cout << "make obj2 by copying from obj1 with copy constructor" << std::endl;
    Pos obj2 = obj1;
    std::cout << "check obj2's variables x:" << obj2.x << ", y:" << obj2.y << std::endl;

    std::cout << "copy obj2 to obj2 by using copy operation" << std::endl;
    obj1 = obj2;
    std::cout << "check obj1's variables x:" << obj1.x << ", y:" << obj1.y << std::endl;

    std::cout << "finish main loop" << std::endl;


    return 0;
}



