
/*
https://www.geeksforgeeks.org/inheritance-in-c/

> Inheritance is a way to create new class from existing classes.
    at this situation .......
        new class : we call it "derived class" or "child class" or "sub class".
        existing class " we call it "base class" or "parent class"or "super class".

> Derived class inherits all the properties of the base class.
> We can add new feathers to derived class. The features don't affect base class.
> Inheritance avoid copying same codes so it can avoid reproducing error and data redundancy.

> Inheritance Syntax : 
    class <derived_class_name> : <access-specifier> <base_class_name>
    {
        // body
    }
    
    <access-specifier> : either of "public", "protected", "private"(default).
    private inheritation : public members(variables and functions) of base-class becomes private members in derived-class.
                            In this inheritation, the public members of base-class can only be accessed
                            by the member functions of the derived-class. 
                            In other word,,,
                            Derived-class still can access base-class's members
                            but it's instance cannot access the base-class's members.
                            If derived-class's instance want to access base-class's members, it should access via derived-class's functions.
    public inheritation : public members(variables and functions) of base-class is still public members of the derived-class.
                            therefore, the public members of base-class are accessible by the object 
                            of the derived-class as well as the member functions of the derived-class. 
                            

*/



#include <iostream>


class BaseClass
{
// private (default)
    int a;
    int b;

public:
    BaseClass(){                                // constractor
        std::cout << "constractor" << std::endl;
    }
    BaseClass(const BaseClass &instance){       // overloaded constractor
        std::cout << "copy constractor" << std::endl;
    }

    ~BaseClass(){                               // destractor
        std::cout << "destractor" << std::endl;
    }

    void set_ab(int arg_a, int arg_b){
        std::cout << "set a b " << std::endl;
        a = arg_a;
        b = arg_b;
    }

    void get_ab(){
        std::cout << "a,b : " << a << " " << b << std::endl;
    }

};


class DerivedClass : public BaseClass
{
    DerivedClass(){                             // constractor
        std::cout << "derived class constractor" << std::endl;
    }

    ~DerivedClass(){                            // destractor
        std::cout << "derived class destractor" << std::endl;
    }






};


int main(void){
    BaseClass obj1;
    BaseClass obj2;

    // obj1.a;  // error: obj1.a is a private member
    obj1.set_ab(1, 2);
    obj1.get_ab();
    
    obj2 = obj1;    // shallow copy (member pointer will point same resources)
                    // very easy to produce bags. 
    obj1.get_ab();
    obj2.get_ab();

    BaseClass obj3 = obj2;  // copy by copy constractor
                            // it can be both shallow-copy(default) and deep-copy.
                            // if copy constractor specify proceedure, it can be deep copy.

    return 0;
}

