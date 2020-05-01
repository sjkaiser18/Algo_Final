//
// Created by Sarah Kaiser on 4/30/20.
//

#include "Random_Manual.h"
template <typename T>
Random_Manual<T>::Random_Manual(){
    std::cout<<"This is the mixed implementation"<<std::endl;
}

template <typename T>
void Random_Manual<T>::shuffle(std::vector<std::pair<std::string,int>> old_vec, std::string out_filename) {
    std::cout << "Shuffling... manually!" << std::endl;

    int n=old_vec.size();
    for(int i=n-1;i>0;i--){
        swap(old_vec[i],old_vec[rand()%i]);
    }

    outFile.open(out_filename,std::ofstream::app);

    if (!outFile.is_open()) {
        std::cout << "Random_Manual, "<<old_vec.size()<< " items."<<std::endl;
        for (int j = 0; j < old_vec.size(); j++) {
            std::cout << old_vec[j].first << " ";
            if(j%10==1 && j!=1){std::cout<<std::endl;}
        }
        std::cout<<std::endl;
    }
    else{
        outFile << "Random_Manual, "<<old_vec.size()<< " items."<<std::endl;
        for (int j = 0; j < old_vec.size(); j++) {
            outFile << old_vec[j].first << " ";
            if(j%10==1 && j!=1){outFile<<std::endl;}
        }
        outFile<<"\n\n";
    }
    outFile.close();

}

template <typename T>
Random_Manual<T>::~Random_Manual(){}

template class Random_Manual <std::string>;