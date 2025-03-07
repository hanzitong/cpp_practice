
#include <iostream>
#include <unordered_set>



template<typename T>
std::ostream& operator<<(std::ostream& out, const std::unordered_set<T>& input) {
    out << '{' << input.size();

    return out << '}';
}


int main() {
    std::unordered_set<int> aa;
    aa.insert(10);
    aa.insert(11);

    // std::cout << aa.size() << std::endl;
    std::cout << aa << std::endl;


    return 0;
}


