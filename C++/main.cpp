#include <iostream>

void SetState(int initX, int initY, int endX, int endY, bool array[1000][1000], bool state=NULL){
    int len = sizeof(array)/sizeof(array[0]);
    int subLen = sizeof(array[0])/sizeof(array[0, 0]);
    
    for (int i = initX; i < endX; i++){
        for (int j = initY; j < endY; j++){
            if (state != NULL) *array[j, i] = state;
            else *array[j, i] = !array[j, i];
        }
    }
}