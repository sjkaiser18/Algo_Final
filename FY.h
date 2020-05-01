//
// Created by Sarah Kaiser on 4/25/20.
//

#ifndef INC_20S_3353_PA04_FY_H
#define INC_20S_3353_PA04_FY_H
#include <iostream>
#include <math.h>
#include <unordered_map>
#include <vector>
#include <fstream>

template <class T>
class FY{
public:
    std::ofstream outFile;
    FY();
    void shuffle(std::vector<std::pair<std::string,int>> old_vec,std::string out_filename);
    ~FY();

};

#endif //INC_20S_3353_PA04_FY_H
