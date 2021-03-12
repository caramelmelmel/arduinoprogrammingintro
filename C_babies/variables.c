#include <stdio.h>

int giveint(){

    //this is a variable right here! 
    //the variable datatype has to be declared 
    int a = 5;
    return a;
}


int main(){
    int b = giveint();
    printf("%d\n",b);
    return 1;

}