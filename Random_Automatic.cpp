//
// Created by Sarah Kaiser on 5/1/20.
//

#include "Random_Automatic.h"
template <typename T>
Random_Automatic
        <T>::Random_Automatic
        (){
    std::cout<<"This is the mixed implementation"<<std::endl;
}

template <typename T>
void Random_Automatic
        <T>::shuffle(std::vector<std::pair<std::string,int>> old_vec, std::string out_filename) {
    std::cout << "Shuffling... auto!" << std::endl;

    std::random_shuffle(old_vec.begin(),old_vec.end());

    outFile.open(out_filename,std::ofstream::app);

    if (!outFile.is_open()) {
        std::cout << "Random_Automatic, "<<old_vec.size()<< " items."<<std::endl;
        for (int j = 0; j < old_vec.size(); j++) {
            std::cout << old_vec[j].first << " ";
            if(j%10==1 && j!=1){std::cout<<std::endl;}
        }
        std::cout<<std::endl;
    }
    else{
        outFile << "Random_Automatic, " <<old_vec.size()<< " items."<<std::endl;
        for (int j = 0; j < old_vec.size(); j++) {
            outFile << old_vec[j].first << " ";
            if(j%10==1 && j!=1){outFile<<std::endl;}
        }
        outFile<<"\n\n";
    }
    outFile.close();

}

template <typename T>
Random_Automatic <T>::~Random_Automatic(){}

template class Random_Automatic<std::string>;