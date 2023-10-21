
#include <iostream>
#include <vector>

template <typename T>
class MyAdvancedClass {
public:
    // イニシャライザリストを使用したコンストラクタ
    MyAdvancedClass(T value) : value(value) {
        std::cout << "Constructor called with value: " << value << std::endl;
    }

    // デストラクタ
    ~MyAdvancedClass() {
        std::cout << "Destructor called" << std::endl;
    }

    // inlineとconstメンバ関数
    inline T getValue() const noexcept {
        return value;
    }

    // staticメンバ関数
    static void staticFunction() {
        std::cout << "Static Function Called" << std::endl;
    }

    // inlineメンバ関数とラムダ式を使用
    inline void processValues(const std::vector<T>& values) {
        std::cout << "Values: ";
        for (const auto& val : values) {
            std::cout << val << " ";
        }
        std::cout << std::endl;
    }

    // mutableラムダとイニシャライザリストを使用
    auto getLambda() const {
        int x = 5;
        return [x, this]() mutable {
            x += static_cast<int>(this->value);
            return x;
        };
    }

protected:
    void protectedFunction() {
        std::cout << "Protected function called" << std::endl;
    }

private:
    T value;
};

int main() {
    // int型でテンプレートクラスをインスタンス化
    MyAdvancedClass<int> myClass(42);

    // constメンバ関数の呼び出し
    std::cout << "Value: " << myClass.getValue() << std::endl;

    // staticメンバ関数の呼び出し
    MyAdvancedClass<int>::staticFunction();

    // inlineメンバ関数とラムダ式を使用したメンバ関数の呼び出し
    myClass.processValues({1, 2, 3, 4, 5});

    // mutableラムダの呼び出し
    auto lambda = myClass.getLambda();
    std::cout << "Lambda Result: " << lambda() << std::endl;

    return 0;
}