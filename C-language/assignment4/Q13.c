#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c,d;
    
    scanf("%f %f %f %f",&a,&b,&c,&d);
    
    float x = (-b-sqrt(pow(b,2)-4*a*c))/2*a;
    
    float y = (-b+sqrt(pow(b,2)-4*a*c))/2*a;
    
    float discriminent = pow(b,2)-4*a*c;
    
    if(a==0){
        
       printf("linear eq.");
        
    }
    else if (discriminent>=0) {
        
           if(x>0 && y>0){
               printf("positive");
           }
           else if(x<0 && y>0){
               printf("one pos., one neg.");
           }
           else if(x<0 && y<0){
               printf("both negetive");
           }
           
    } 
    else{
        printf("Imaginary");
    }

    return 0;
}
