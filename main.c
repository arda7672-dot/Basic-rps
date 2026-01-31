#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int choice;

    srand(time(NULL));
    int answer = (rand() % 3) + 1;//1,2,3

   

    printf("***ROCK-PAPER-SCISSORS\n");
    printf("Please choose your choice: \n");
    printf("1 = ROCK  2 = PAPER  3 = SCISSORS\n");
    scanf("%d",&choice);
    
    switch (choice){
    case 1:
    if(answer == 2){
        printf("WİNNER İS COMPUTER\n");
        printf("COMPUTER CHOİCE İS PAPER ");
    }
    else if(answer == 3){
        printf("WİNNER ARE YOU\n");
        printf("COMPUTER CHOİCE İS SCISSORS");
    }
    else{
        printf("DRAW");
    }
    break;
      
    case 2:
    if(answer == 1){
        printf("WİNNER ARE YOU \n");
        printf("COMPUTER CHOİCE İS ROCK");
    }
    else if(answer == 3){
        printf("WİNNER İS COMPUTER \n");
        printf("COMPUTER CHOİCE İS SCISSORS");
    }
    else{
        printf("DRAW");
    }
break;

    case 3:
    if(answer == 2){
        printf("WİNNER ARE YOU \n");
        printf("COMPUTER CHOİCE İS PAPER");
    }
    else if(answer == 1){
        printf("WİNNER İS COMPUTER \n");
        printf("COMPUTER CHOİCE İS ROCK");
    }
    else{
        printf("DRAW");
    }
 break;
    }
    
    return 0;
}
