#include <iostream>


/*
実験結果：
if-else_if-else文はpythonと同様に最初に条件合致した文しか実行しない．
たとえ後ろで条件合致する条件分があっても無視される．

memo:seich文は条件合致した文とそれ以降も実行されてしまうのでbreak;が必要だった．


三項演算子: tertiary operator
    condition ? value 1 : value 2 ;
        if condition is true, this evaluate as value1 if not , value2 

*/




void func(void){
    int a = 0;
    double b = 3.;

    if(a < b){
        std::cout << "first statement" << std::endl;
    }else if(a > b){
        std::cout << "second statement" << std::endl;
    }else if(a == 0){
        std::cout << "third statement" << std::endl;
    }else{
        std::cout << "final statement" << std::endl;
    }

}




int main(){
    int j = 1;
    int k;

    k = j == 1 ? 1 : 2; // tertiary operator
    std::cout << k << "\n";

    return 0;
}







