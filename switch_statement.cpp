
#include <iostream>

/*
実験結果：
switch文は条件合致したcase以降をすべて上から順に実行してしまう．
if-else_if-else 文みたいな,条件合致したところだけ実行されるような条件分岐をしたかったら各caseにbreak文を入れる．

逆にbreak無しのswitch文は文全体を一つの川に見立てると条件合致したcaseから川に入る文
というオリジナルの理解もできる．

*/



int main(){
    int a = 2;

    switch (a)
    {
    case 1:
        std::cout << "switch first statement" << std::endl;
        //break;
    case 2:
        std::cout << "switch second statement" << std::endl;
        //break;
    case 3:
        std::cout << "switch third statement" << std::endl;
        //break;
    default:
        std::cout << "default statement" << std::endl;
        break;  //ここ，一番最後は厳密にはbreakいらなくない？
    }


    return 0;
}




