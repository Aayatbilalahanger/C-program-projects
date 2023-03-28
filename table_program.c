/*
author : aayat bilal
purpose: to read a number and print multiplication table 
*/
#include<stdio.h>
#include<conio.h>
void main(){
    // variable declration
    int input , i;
    // read data form user
    printf("print Table you want:");
    scanf("%d",&input); 
    // logic 
    for( i =1; i<=10;i++){
        printf("%dx%d =%d\n", input , i , input*i);
    }
    getch();


}