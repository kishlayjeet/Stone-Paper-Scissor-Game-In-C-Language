// Stone Paper Scissor Game
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function
int stonePaperScissor(char you, char comp)
{
    // returns 1 if you win, -1 if you lose and 0 if draw
    // Condition for draw
    // Cases covered:
    // ss
    // pp
    // xx
    if (you == comp)
    {
        return 0;
    }

    // Non-draw conditions
    // Cases covered:
    // sx
    // xs
    // sp
    // ps
    // xp
    // px

    if (you == 's' && comp == 'x')
    {
        return 1;
    }
    else if (you == 'x' && comp == 's')
    {
        return -1;
    }

    if (you == 's' && comp == 'p')
    {
        return -1;
    }
    else if (you == 'p' && comp == 's')
    {
        return 1;
    }

    if (you == 'x' && comp == 'p')
    {
        return 1;
    }
    else if (you == 'p' && comp == 'x')
    {
        return -1;
    }

    return 0;
}

int main()
{
    char you, comp;
    srand(time(0));
    int number = rand() % 100 + 1;

    if (number < 33)
    {
        comp = 's';
    }
    else if (number > 33 && number < 66)
    {
        comp = 'p'; // w
    }
    else
    {
        comp = 'x'; // g
    }

    printf("\nEnter 's' for Stone, 'p' for Paper and 'x' for Scissor\n");
    scanf("%c", &you);
    int result = stonePaperScissor(you, comp);
    if (result == 0)
    {
        printf("Game draw!\n");
    }
    else if (result == 1)
    {
        printf("You win!\n");
    }
    else
    {
        printf("You lose!\n");
    }
    printf("You choose %c and computer choose %c.\n\n", you, comp);

    return 0;
}