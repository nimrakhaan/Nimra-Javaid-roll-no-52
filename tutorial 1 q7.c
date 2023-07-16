#include<stdio.h> 
 //program to calculate percentage and grade of a student 
 int main(){ 
         int maths,english,science,sst, urdu,t=500,sum; 
         float p; 
  
         printf("enter the marks of 5 subjects:"); 
         scanf("%d %d %d %d %d",&maths,&english,&science,&sst,&urdu); 
         sum= maths+english+science+sst+urdu; 
         printf("sum =%d",sum); 
         p=(sum*100)/t; 
         printf(" percentage=%f",p); 
         return 0; 
 }