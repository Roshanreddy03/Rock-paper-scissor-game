#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int computer_choice, user_choice;
    char play_again;
    printf("*** Welcome to Rock, Paper, Scissors Game ***\n");
    srand(time(0));
    do
    {
        printf("Enter:\n0 for Rock\n1 for Paper\n2 for Scissors\n");
        printf("Enter your choice: ");
        scanf("%d", &user_choice);
        if (user_choice<0 || user_choice>2){
            printf("Invalid choice, try again\n");
            continue;
        }
        if (user_choice == 0)
        {
            printf("-> I choose rock\n");
        }
        else if (user_choice == 1)
        {
            printf("-> I choose paper\n");
        }
        else if (user_choice == 2)
        {
            printf("-> I choose scissor\n");
        }

        computer_choice = rand() % 3;
        if (computer_choice == 0)
        {
            printf("-> Computer choose rock\n");
        }
        else if (computer_choice == 1)
        {
            printf("-> Computer choose paper\n");
        }
        else if (computer_choice == 2)
        {
            printf("-> Computer choose scissor\n");
        }

        if (computer_choice == user_choice)
        {
            printf("It's a draw \n");
        }
        else if (user_choice == 0 && computer_choice == 2 || user_choice == 1 && computer_choice == 0 || user_choice == 2 & computer_choice == 1) // 0,2 and 1,0 and 2,1
        {
            printf("You win \n");
        }
        else if (user_choice == 2 && computer_choice == 0 || user_choice == 0 & computer_choice == 1 || user_choice == 1 || computer_choice == 2) // 2,0 and 0,1 and 1,2
        {
            printf("You lose \n");
        }
        printf("\nDo you want to play again? (y/n): ");
        scanf(" %c", &play_again); 
    }
    while (play_again == 'y' || play_again == 'Y');

    printf("Thanks for playing! \n");
    return 0;
}