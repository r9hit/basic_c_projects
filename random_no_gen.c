#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(){
    int number;
    srand(time(0));
    number = rand()%99 + 1;
    printf("generated num is : %d",number);
    return 0;
}