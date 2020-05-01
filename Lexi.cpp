//
// Created by Sarah Kaiser on 4/25/20.
//


#include "Lexi.h"

template <typename T>
Lexi<T>::Lexi(){
    std::cout<<"This is the lexographical implementation"<<std::endl;
}

template <typename T>
void Lexi<T>::shuffle(std::vector<std::pair<std::string,int>> old_vec,std::string out_filename) {
    //will need to pass in the specific vector for that input
    std::cout << "Shuffling... lexographically!" << std::endl;


    int n = old_vec.size();
    int sos = old_vec.size();
    std::vector<std::string> new_vec;
    int i = 0;
    while (n>0) {
        i = rand() % sos;
        for(int j=0;j<old_vec.size();j++){
            if(i==old_vec[j].second){
                new_vec.push_back(old_vec[j].first);
                old_vec.erase(old_vec.begin()+j);
                n--;
            }
        }
    }//end of while loop
    outFile.open(out_filename,std::ofstream::app);

    if (!outFile.is_open()) {
        std::cout << "Lexographical Shuffle, "<<new_vec.size()<< " items."<<std::endl;
        for (int j = 0; j < new_vec.size(); j++) {
            std::cout << new_vec[j] << " ";
            if(j%10==1 && j!=1){std::cout<<std::endl;}
        }
       std::cout<<std::endl;
    } else {
        outFile << "Lexographical Shuffle, "<<new_vec.size()<< " items."<<std::endl;
        for (int j = 0; j < new_vec.size(); j++) {
            outFile << new_vec[j] << " ";
            if(j%10==1 && j!=1){outFile<<std::endl;}
        }
        outFile<<"\n\n";
    }
    outFile.close();
}

template <typename T>
Lexi<T>::~Lexi(){}

template class Lexi <std::string>;