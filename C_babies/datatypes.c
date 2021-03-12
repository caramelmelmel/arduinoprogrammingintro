#include<stdio.h>

int returnint(){
    int a = 5;
    return a;
}

void returnnone(){
    return;
}

float givefloat(){
    float a = 5.0;
    return a;
}

char givechar(){
    char a = 'a';
    return a;
}

int main(){
    printf("%d\n",returnint());
    printf("%c\n",givechar());
    printf("%f\n",givefloat());
    return 1;
}