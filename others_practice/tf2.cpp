

/*
tf2 can rotate vector with tf2::quatRotate(q, vec)
be careful that the function argument is "call by velue" not "call by reference"
so the only output is after-rotate vector
*/


#include <iostream>
#include "tf2/LinearMath/Quaternion.h"
// #include "Quaternion.h"



int main(int argc, char* argv[]){
    tf2::Vector3 vec1;
    tf2::Vector3 vec2;
    tf2::Quaternion q1;

    for(int i=0; i<3; i++){
        vec1[i] = 0;
        // q1[i] = 0;
    }
    // q1[3] = 1.;
    vec1[0] = 1.;

    // q1.setRPY(0., 0., 90.);  // incorrect
    q1.setRPY(0., 0., M_PI/2.); // radian

    vec1 = tf2::quatRotate(q1, vec1);

    // std::cout << "here-----" << std::endl;
    for(int i=0; i<4; i++){
        std::cout << vec1[i] << std::endl;
        // std::cout << vec2[i] << std::endl;
        // std::cout << q1[i] << std::endl;
    }


    return 0;
}

