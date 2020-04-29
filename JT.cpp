//
// Created by Sarah Kaiser on 4/25/20.
//

#include <unordered_map>
#include "JT.h"
template <typename T>
JT<T>::JT(){
    std::cout<<"This is the Johnson-Trotter implementation"<<std::endl;
}

template <typename T>
void JT<T>::shuffle(std::vector<std::pair<std::string,int>> old_vec){
    //will need to pass in the specific vector for that input
    std::cout<<"Shuffling... the Johnson-Trotter ways!"<<std::endl;

    int n=old_vec.size();
    int i;
    int temp;

    while(n>0){
       i=floor(rand()%n--);
       temp=old_vec[n].second;
       old_vec[n].second=old_vec[i].second;
       old_vec[i].second=temp;
      }//end of while loop

}

template <typename T>
JT<T>::~JT(){
    std::cout<<"Hasta la vista"<<std::endl;
}

template class JT <std::string>;