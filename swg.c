#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int snakewaterGun(char you,char comp){
    //returns 1 if you win, 1 if you loose and 0 if draw

    //Draw condition
    //ss,ww,gg

    if (you ==comp)
    {
        return 0;
    }
    //Non-draw
    //Cases covered
    // sg,gs
    // sw,ws
    // gw,wg

    if (you=='s' && comp == 'g')
    {
        return  -1;
    }
    else if(you=='g' && comp=='s')
    {
        return 1;
    }
    if (you=='s' && comp == 'w')
    {
        return  1;  
    }
    else if(you ='w' && comp=='s')
    {
        return -1;
    }
    if (you=='g' && comp == 'w')
    {
        return  -1;
    }
    else if(you=='w' && comp == 'g')
    {
        return 1; 
    }    
      
}
int main(){
    char you, comp;
    srand(time(0));
    int number = rand()%100+1;
    if (number<33)
    {
        comp='s';
    }
    else if (number<33 && number > 66){
        comp='w';
    }
    else
    {
        comp='g';
    }
 
    printf("Enter 's' for snake, 'w' for water and 'g' for gun\n");
    scanf("%c",&you);
    int result = snakewaterGun(you,comp);
    printf("You choose %c and computer choose %c\n",you,comp);

    if(result==0){
        printf("Game Draw\n");
    }
    else if(result==1)
    {
        printf("You Win!!\n!");
    }
    else
    {
        printf("You lose!!\n");
    }
    

    return 0;
}
