
#include <iostream>
#include <vector>



main(){
    std::vector<std::vector<std::vector<int>>> vec3 = 
        {{{1, 2},{3, 4},{5, 6}}, {{7, 8},{9, 10},{11, 12}}};

    std::string str;

    for (int i=0; i<2; ++i) {
        for (int j=0; j<3; ++j) {
            for (int k=0; k<2; ++k) {
                // std::cout << i << " " << j << " " << k << std::endl;
                std::cout << vec3[i][j][k] << std::endl;
            }
        }
    }

    // 2d array
    std::vector<std::vector<int>> vec2 = 
        {{1, 2},{3, 4},{5, 6}, {7, 8},{9, 10},{11, 12}};


    return;
}

