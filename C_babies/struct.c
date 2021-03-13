#include <stdio.h>
int main(){
   // defining struct
   struct Vector_Int{
       int x;
       int y;
       int z;
       char name[64];
   };

   // structure variable declaration, empty member values
   struct Vector_Int v1;

   // manual member initialization
   v1.x = 2;
   v1.y = 3;
   v1.z = 10;
   sprintf(v1.name, "Vector 1");

   // structure variable auto member initialization
   struct Vector_Int v2 = {3,5,11, "Vector 2"};

   printf("Values of v1 is x:%d y:%d z:%d name: %s\n", v1.x, v1.y, v1.z, v1.name);
   printf("Values of v2 is x:%d y:%d z:%d name: %s\n", v2.x, v2.y, v2.z, v2.name);

   return 1;
}