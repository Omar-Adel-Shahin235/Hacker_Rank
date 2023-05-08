#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Complete the following function.

int marks_summation(int* marks, int number_of_students, char gender) {

int i,sum=0;
   switch(gender)
   {
       case 'b':
       for(i=0;i<number_of_students; i+=2)
       {
          sum+=*(marks+i); 
       }
       break;
       
       case 'g':
       for(i=1;i<number_of_students; i+=2)
       {
          sum+=*(marks+i); 
       }
       break;
   }
   return sum;
}

int main() {