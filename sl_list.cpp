#include "easy_list.h"

int itc_sl_list(const vector <int> &mass){
    int count = mass.size();
    int col;
    for(int i = 0; i< count; i++){
        if(mass[i + 1] > mass[i]){
            col++;
        }
    }
    return col;
}
