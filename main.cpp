//
// Created by Sarah Kaiser on 4/23/20.
//

#include "Lexi.h"
#include "JT.h"

#include <iostream>
#include <chrono>
#include <fstream>

using namespace std::chrono;
int main(int argc, char* argv[]){

    std::ofstream timingFile;
    timingFile.open("timing.txt");
    timingFile.clear();
    //input some sort of casino card testing
    //randomized surveys- how big sites like Amazon could get random feedback
    //BINGO?
    //randomization in clinical trials- list of patients

    Lexi<std::string> lex;
    JT<std::string> jt;

    int val=1;

    while(val<3) {
        auto start = high_resolution_clock::now();
        std::cout << "Doin time, and the living's easy" << std::endl;
        //i will have to hash the values first, probably in main, and then send them to the functions
        val == 1 ? lex.shuffle() : jt.shuffle();
        auto stop = high_resolution_clock::now();

        auto duration = duration_cast<microseconds>(stop - start);
        if (!timingFile.is_open()) {

            std::cout << duration.count() << " microseconds" << std::endl;
        } else {
            timingFile << duration.count() << " microseconds." << std::endl;
        }
        val++;
    }


    timingFile.close();

    return 0;
}

