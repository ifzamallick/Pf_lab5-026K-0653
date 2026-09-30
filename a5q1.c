# include<stdio.h>
int main(){
int type,time;
int fee=0;
char status;
printf("time in hours");
scanf("%d",&time);
if(time<=0){
    printf("Invalid duration");}

printf("Vehicle");
scanf("%d",&type);
switch(type){
    
    case 1: printf("Bike\n");
    if(time<=0){
        printf("Invalid duration");}
        else{
           fee=20*time;
        }break;
    case 2:printf("Car");
        if(time<=3){
            fee=50;}
            else{
                fee=50+30*(time-2);
                printf("fee",&fee);
    
           } break;  
    case 3:printf("truck");
        if(time<=3){
            fee=100;}else
            {fee=100+50*(time-3);
            printf("fee",&fee);}
            break;
        
        default: printf("invalid");

}
printf("are you a member?");
scanf(" %c", &status);
if(status=='y' || status=='Y'){
    if(fee>200){
        fee=fee-(fee*0.15);}
}
printf("fee %d", fee);
return 0;
}