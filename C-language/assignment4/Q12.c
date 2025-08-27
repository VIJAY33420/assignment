#include <stdio.h>

int main()
{    int a,b,c,d;
     int M = a+b;
     int N = c+d;
     scanf("%d %d",&M,&N);
     int D = M+N/60;
     int Z = M+N%60;
     
     if(D<12){
         
         printf("AM");
         
     }
     else if(D>=12){
         
         printf("PM");
         
     }
     else if(Z==0){
         
         printf("on the Hour");
         
     }
     else if(Z>30){
         
         
             
             printf("Past Half");
             
         }
         else {
             
             printf("before half");
             
         }
     
     
     
    return 0;
}
