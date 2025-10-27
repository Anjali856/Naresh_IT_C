#include<stdio.h>
int main(){
    int td,days,month,year;
      printf("Enter total days:");
    scanf("%d",&td);
     year=td/365;
     month=(td%365)/30;
       days=(td%365)%30;
    printf("%d year %d month %d days",year,month,days);
   return 0; 
}
