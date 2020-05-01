//
// Created by Sarah Kaiser on 4/25/20.
//

#include <unordered_map>
#include "FY.h"
template <typename T>
FY<T>::FY(){
    std::cout<<"This is the Fisher-Yates implementation"<<std::endl;
}

template <typename T>
void FY<T>::shuffle(std::vector<std::pair<std::string,int>> old_vec,std::string out_filename){
    std::cout<<"Shuffling... the Fisher-Yates way!"<<std::endl;

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

        outFile.open(out_filename,std::ofstream::app);
      if(!outFile.is_open()) {
          std::cout << "Fisher-Yates Shuffle = ";
          for (int j = 0; j < old_vec.size(); j++) {
              std::cout << old_vec[j].first << " ";
              if(j%10==0){std::cout<<std::endl;}
          }
          std::cout<<std::endl;
      }
    else {
        outFile << "Fisher-Yates Shuffle = ";
        for (int j = 0; j < old_vec.size(); j++) {
            outFile << old_vec[j].first << " ";
            if(j%10==0){outFile<<std::endl;}
        }
          outFile<<"\n\n";
    }
    outFile.close();
}

template <typename T>
FY<T>::~FY(){
    std::cout<<"Hasta la vista"<<std::endl;
}

template class FY <std::string>;