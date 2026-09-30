#include<stdio.h>
int main()
{
int age,rate;
int oxygen=0;
 printf("oxygen");
 scanf("%d",&oxygen);
  
 
 if(oxygen<90)
 {
    printf("CRITICAL:IMMEDIATE ATTENTION"); }
    
    else { printf("enter BP");
        scanf("%d",&rate);
        if(rate>130 || rate<40){
        printf("CRITICAL:CARDIAC ARREST");}
        else{
        
        
            printf("AGE:");
            scanf("%d",&age);}
    
            
            if(age>=65 && oxygen<95){
                printf("HIGH PRIORITY");
            }
            else if(age<=5 && rate>110){
                printf("HIGH PRIORITY");
            }
            else if(oxygen<97){
                printf("Medium priority");}
            else{printf("low priority");}
    
        }



    
    
    
    
    
    
    
    
    
    return 0;
}