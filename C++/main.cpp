#include <iostream>

void ChangeState(int initX, int initY, int endX, int endY, bool array[1000][1000], bool state=NULL){
    int len = sizeof(array)/sizeof(array[0]);
    int subLen = sizeof(array[0])/sizeof(array[0, 0]);
    
    for (int i = initX; i < endX; i++){
        for (int j = initY; j < endY; j++){
            if (state != NULL) *array[j, i] = state;
            else *array[j, i] = !array[j, i];
        }
    }
}

int countLights(bool array[1000][1000], bool state){
    int lights = 0;
    for (int i = 0; i < sizeof(array)/sizeof(array[0]); i++){
        for (int j = 0; j < sizeof(array[i])/sizeof(array[i][0]); i++){
            if (*array[i, j] == state){
                lights++;
            }
        }
    }
    return lights;
}