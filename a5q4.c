#include<stdio.h>
int main(){

int card,pin,withdraw;
int balance=50000;
int new=0;
int n100,n2000,n500;

printf("Card is blocked or not");
scanf("%d",&card);
if(card==0){printf("CARD IS BLOCKED,\t\t\t\tCONTACT bACK");}


else {
    printf("Pin: \n0=wrong");
    scanf("%d",&pin);}

    if(pin==0&&card==1)
    {printf("INCORRECT PIN,TRY AGAIN");
    }
        printf("withdrawal amount");
        scanf("%d",&withdraw);

        if(withdraw>=0)
        {
             if(withdraw>balance)
        {printf("insufficient balance");}

        else if(withdraw>25000)
        {printf("Daily limit exceeded");}

    else if((balance-withdraw)<1000)
    {printf("MINIMUM BALNCE MUST BE MAINTAINED");
    }
else if(balance<withdraw)
 {printf("INVALID AMOUNT");}
 else if(withdraw<=0){printf("INVALID AMOUNT");}
 else{
printf("DISPENSING");}}
new=balance-withdraw;
printf("NEW BALANCE=%d",new);
   
n2000=withdraw/2000;
withdraw=withdraw%2000;
n500=withdraw/500;
withdraw=withdraw%500;
n100=withdraw/100;
withdraw=withdraw%100;

printf("2000rs notes:\n%d",n2000);
printf("500rs notes:\n%d",n500);
printf("100:\n%d",n100);







return 0;
}