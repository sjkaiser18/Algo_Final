//
// Created by Sarah Kaiser on 4/23/20.
//

#include "Lexi.h"
#include "JT.h"

#include <iostream>
#include <chrono>
#include <fstream>
#include <unordered_map>

using namespace std::chrono;
int main(int argc, char* argv[]){


    std::string tests[4]={"bingo.txt","hoyle.txt","survey_sample.txt","raffle.txt"};
    
    std::ofstream timingFile;
    std::ifstream inputFile;
    timingFile.open("timing.txt");
    timingFile.clear();

    Lexi<std::string> lex;
    JT<std::string> jt;
    std::cout<<"tests->size = " <<tests->size()<< " ";
    for(int i =0;i<4;i++){
        inputFile.open(tests[i]);
        int count=0;
        std::vector<std::pair<std::string,int>> old_vec;
        while(inputFile.good()) {
            std::string item;
            getline(inputFile, item);
            old_vec.push_back(std::make_pair(item, count));
            count++;
        }
        inputFile.close();
    int val=1;

    while(val<3) {
        auto start = high_resolution_clock::now();
        std::cout << "Doin time, and the living's easy" << std::endl;
        //i will have to hash the values first, probably in main, and then send them to the functions
        val == 1 ? lex.shuffle(old_vec) : jt.shuffle(old_vec);
        auto stop = high_resolution_clock::now();

        auto duration = duration_cast<microseconds>(stop - start);
        if (!timingFile.is_open()) {

            std::cout << duration.count() << " microseconds" << std::endl;
        } else {
            timingFile << duration.count() << " microseconds." << std::endl;
        }
        val++;
    }
}

    timingFile.close();

    return 0;
}

