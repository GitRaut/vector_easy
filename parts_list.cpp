#include "easy_list.h"

void itc_even_parts_list(const vector <int> &mass, vector <int> &mass2){
    int count = mass.size();
    for(int i = 0; i < count; i++){
        if(mass[i] % 2 == 0){
            mass2.push_back(mass[i]);
        }
    }
}
