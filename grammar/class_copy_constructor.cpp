


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


Pos::Pos(int tempx, int tempy){
    std::cout << "constractor" << std::endl;
    x = tempx;
    y = tempy;
}

Pos::Pos(const Pos& pos){
    std::cout << "copy constractor" << std::endl;
    x = pos.x;
    y = pos.y;
}

Pos::~Pos(void){
    std::cout << "destractor" << std::endl;
}


int main(){
    int a = 5;
    Pos obj1(1, 2);
    Pos obj2 = obj1;

    std::cout << "here" << std::endl;
    obj1 = obj2;

    return 0;
}










