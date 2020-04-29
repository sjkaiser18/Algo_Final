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
    std::string tempf;
    int temps;

    while(n>0){
       i=floor(rand()%n--);
       tempf=old_vec[n].first;
       temps=old_vec[n].second;
       old_vec[n].first=old_vec[i].first;
       old_vec[n].second=old_vec[i].second;
       old_vec[i].first=tempf;
       old_vec[i].second=temps;
      }//end of while loop
      std::cout<<"New vector = ";
for(int j=0;j<old_vec.size();j++){
    std::cout<<old_vec[j].first<<" ";
}

}

template <typename T>
JT<T>::~JT(){
    std::cout<<"Hasta la vista"<<std::endl;
}

template class JT <std::string>;