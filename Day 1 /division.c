#include<stdio.h>
int main(){
    int a;
    printf("Enter a number=  ");
    scanf("%d" , &a);
    if (a %5==0 && a %7 ==0){
        printf("FUZZY BUZZY");
    }else if (a %7 ==0){
        printf("BUZZY");
    }else if (a %5 ==0){
        printf("BUZZY");
    }
    else {
        printf("Some went wrong");
    }
}
