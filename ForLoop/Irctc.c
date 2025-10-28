#include<stdio.h>
#include<string.h>
void main(){
    char user[20],pass[20],cap[20];
    printf("Enter Your username");
    scanf("%s",user);
    printf("Enter Your password");
    scanf("%s",pass);
    printf("Enter Your captcha");
    scanf("%s",cap);
    if(strcmp(user,"Anjali")==0){

    if(strcmp(pass,"Indian-1")==0){
      
        if(strcmp(cap, "Hyd-1")==0){
            printf("Welcome to IRCTC");
        }
        else{
            printf("Invalid Captcha");
        }

    }
    else{
        printf("Invalid password");
    }

}
else{
    printf("Invalid user id");
}
}
