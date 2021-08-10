#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int Conditions(char you , char comp)
{
    //return 1 if you win , -1 if you lose and 0 when draw
    //for ss , gg , ww
    if(you == comp)   
        return 0;

    //for sg , sw , ws ,wg ,gs , gw
    if(you == 's' && comp == 'g')
        return -1;
    else if(you == 'g' && comp == 's')
        return 1;
    if(you == 'w' && comp == 's')
        return -1;
    else if(you == 's' && comp == 'w')
        return 1;
    if(you == 'g' && comp == 'w')
        return -1;
    else if(you == 'w' && comp == 'g')
        return 1;
}
int main()
{
    char you, comp;
    srand(time(0));
    int number = rand()%100 + 1;
    if(number<33)
        comp = 's';
    else if(number>33 && number<66)
        comp = 'w';
    else
        comp = 'g';

    printf("Enter 's' for Snake ,'w' for Water and 'g' for Gun :\n");
    scanf("%c", &you);
    printf("You choose %c and Computer choose %c.\n", you, comp);
    int result = Conditions(you,comp);

    if(result == 0)
        printf("Game Draw..!\n");
    else if(result == 1)
        printf("You Win..!\n");
    else
        printf("You Lose..!\n");

    return 0;
}