#include <iostream>


/*
実験結果：
if-else_if-else文はpythonと同様に最初に条件合致した文しか実行しない．
たとえ後ろで条件合致する条件分があっても無視される．

seich文は条件合致した文とそれ以降も実行されてしまうのでbreak;が必要だった．

*/


int main(){
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


    return 0;
}







