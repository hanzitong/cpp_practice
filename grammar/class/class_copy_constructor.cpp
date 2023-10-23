
/*
for using copy constractor, we need to be careful about difference of deep copy and sharow copy.
deep copy: duplicate whole resources which pointer is pointing.
shalow copy: copy only pointer's address so the pointing resources are same.(it causes many bags) 
deep copy: it can be conducted with only copy-constractor. it won't copy the member pointer directlly.
            but we should remember that even copy-constractor is used, it's default is shallow copy.
            we should 


*/

// not enough enderstand for shalow copy & deep copy yet..............


#include <iostream>

class Pos
{
// private:     // default
    int x;
    int y;
    int *arrow; // pointer member !!!!!!!!!!!!!!
public:
    Pos(int tempx, int tempy);
    Pos(const Pos& pos);
    ~Pos();
    void get_ab();
    void set_arrow(int);
    void set_arrow(int, int);
    void get_arrow();
};

// normal constractor
Pos::Pos(int tempx, int tempy){
    std::cout << "constractor" << std::endl;
    x = tempx;
    y = tempy;
    arrow = new int(x + y);  // new: it returns pointer whose value is initialized with x+y.
}

// copy constractor
Pos::Pos(const Pos& pos){// argument needs Pos it's own instance so we recognize it's copy constructor.
    std::cout << "copy constractor" << std::endl;
    x = pos.x;
    y = pos.y;
    // secure new memory in heap for arrow member pointer.
    arrow = new int(1000);
}

// destractor
Pos::~Pos(void){
    std::cout << "destractor" << std::endl;
    // delete arrow;
}

void Pos::set_arrow(int val){
    *arrow = val;
}

void Pos::set_arrow(int val, int vaal){
    *arrow = val;
}

void Pos::get_ab(){
    // std::cout << "a: " << Pos.x << "b: " << Pos.y << std::endl;
    std::cout << "a: " << x << ",  b: " << y << ", arrow" << *arrow << std::endl;
}



int main(void){
    Pos obj1(1, 2);
    Pos obj2(2, 3);

    // watch initial value
    obj1.get_ab();
    obj2.get_ab();

    // shallow copy
    std::cout << "shallow copy" << std::endl;    
    obj2 = obj1;    // shallow copy (member pointer will point same resources)
                    // very easy to produce bags. 
    obj1.get_ab();
    obj2.get_ab();
    // even I changed only obj2, obj1 is also changed. (because of shallow copy, arrow points same memory)
    std::cout << "set value via arrow" << std::endl;
    obj2.set_arrow(20);
    obj1.get_ab();
    obj2.get_ab();

    // deep copy
    std::cout << "deep copy" << std::endl;
    Pos obj3 = obj2;  // use copy constractor (deep copy)
                            // it can be both shallow-copy(default) and deep-copy.
                            // if copy constractor specify proceedure, it can be deep copy.
    std::cout << "set value via arrow" << std::endl;
    obj2.get_ab();
    obj3.get_ab();      // obj3.arrow is initialized by copy constructor.


    return 0;
}


