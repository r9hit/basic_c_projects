/*
This program is written by Rohit Kumar 
Date : 05-Aug-2022 
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int rockPaperScissor(char you, char computer){
    // returns 1 if you win, -1 if you lose and 0 if draw
    // Condition for draw :
    // Cases covered : (rock rock) , (paper paper) , (scissor scissor) 

    if(you == computer){
        return 0;
    }

    // Non-draw conditions
    // Cases covered :(rock paper),(paper rock),(paper scissor),(scisoor paper),(rock scissor),(scissor rock)
     if(you == 'r' && computer == 'p'){
        return -1;
    }
    else if(you =='p' && computer =='r'){
        return 1;
    }

    if(you == 'p' && computer =='s'){
        return -1;
    }
    else if(you == 's' && computer =='p'){
        return 1;
    }

    if(you=='r' && computer == 's'){
        return -1;
    }
    else if(you == 's' && computer=='r'){
        return 1;
    }

}


int main(){
    int number;
    srand(time(0)); 
    number = rand()%99 + 1 ; // this generates a random number between 1 to 99
    char you ,computer;
    
    // Computer is choosing its object based on random num generated...
    if(number <=33){
        computer ='r';
    }
    else if( number >33 && number <=66 ){
        computer ='p';
    }
    else{
        computer ='s';
    }

    // for the people playing the game... 

    printf("Enter a char to choose a object as follows : \n");
    printf("r --> rock \t p -->paper \t s --> scissor :\n");
    scanf("%c",&you);
   
    // function for check the result

    int result = rockPaperScissor(you, computer);

    // result
    if(result ==0){
        printf("Game drawn!\n");
    }
    else if(result==1){
        printf("You won!\n");
    }
    else{
        printf("You Lost!\n");
    }
    printf("You choosed %c and Computer choosed %c. ", you, computer);
    return 0;
}
