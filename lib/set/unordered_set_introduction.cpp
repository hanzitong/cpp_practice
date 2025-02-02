
#include <iostream>
#include <set>
#include <unordered_set>
#include <algorithm>


template<typename T>
std::ostream& operator<<(std::ostream& out, const std::unordered_set<T>& set)
{
    if (set.empty())
        return out << "{}";
    out << "{ " << *set.begin();
    std::for_each(std::next(set.begin()), set.end(), [&out](const T& element)
    {
        out << ", " << element;
    });
    return out << " }";
}
 

int main() {
    std::unordered_set<int> obj{1, 2, 3};
    obj.insert(50);
    std::cout << obj << std::endl;
    obj.erase(2);
    std::cout << obj << std::endl;
    std::cout << obj.size() << std::endl;


    return 0;
}


