 #include<stdio.h>
 
 //declare in static memory
 static int vector_int[3] = {1,2,3};

 int main(){
     printf("Contents of vector_int %d %d %d \n", vector_int[0], vector_int[1], vector_int[2]);
     return 1;
 }