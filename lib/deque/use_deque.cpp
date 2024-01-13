
#include <iostream>
#include <deque>


int main(){
    std::deque<int> dq = {9, 2, 4, 4};

    dq.push_back(100);
    dq.push_front(0);

    std::cout << "front: " << dq.front() << std::endl;
    std::cout << "back: " << dq.back() << std::endl;

    dq.pop_front();

    for (int i=0; i<dq.size(); ++i) {
        std::cout << dq[i] << std::endl;
    }








    return 0;
}



