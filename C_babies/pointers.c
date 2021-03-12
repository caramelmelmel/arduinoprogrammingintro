#include<stdio.h>
int main(){
    int vector_int[3] = {1,2,3};

    //pointer is here
   int *vector_int_pointer = vector_int;
   printf("Address of vector_int array is 0x%llx\n", vector_int_pointer);
   printf("Address of the first element in vector_int array is 0x%llx\n", &vector_int[0]);
   printf("Address of the second element in vector_int array is 0x%llx\n", &vector_int[1]);
   printf("Address of the third element in vector_int array is 0x%llx\n", &vector_int[2]);

   printf("Printing address using pointer : \n");
   printf("Address of the first element in vector_int array is 0x%llx\n", vector_int_pointer);
   printf("Address of the second element in vector_int array is 0x%llx\n", vector_int_pointer+1);
   printf("Address of the third element in vector_int array is 0x%llx\n", vector_int_pointer+2);
}