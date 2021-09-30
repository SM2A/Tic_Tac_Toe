#include <stdio.h>

int main() {

    /*Declare Variables*/

    int position = 0;
    int round = 0;
    char one = ' ';
    char two = ' ';
    char three = ' ';
    char four = ' ';
    char five = ' ';
    char six = ' ';
    char seven = ' ';
    char eight = ' ';
    char nine = ' ';

    printf("Hello\nWellCome to Tic Tac Toe\n");
    printf("PLease enter a number from map bellow\n"
           """ 1 | 2 | 3 \n-----------\n 4 | 5 | 6 \n-----------\n 7 | 8 | 9 \n");

    while (round < 9) {

        round++;

        printf("Player X turn\nPLease enter a number from 1 to 9 :\n");

        {
            scanf("%d", &position);

            while (1) {

                /*Correct Input Check (Out of Range number)*/

                while ((position != 1) && (position != 2) && (position != 3) && (position != 4)
                       && (position != 5) && (position != 6) && (position != 7) && (position != 8) && (position != 9)) {

                    printf("Please enter correct number :\n");
                    scanf("%d", &position);
                }

                /*Correct Input Check (Non empty place)*/

                while (position == 1 && ((one == 'X') || (one == 'O'))) {
                    printf("This place is taken\nPlease enter another number :\n");
                    scanf("%d", &position);
                }
                while (position == 2 && ((two == 'X') || (two == 'O'))) {
                    printf("This place is taken\nPlease enter another number :\n");
                    scanf("%d", &position);
                }
                while (position == 3 && ((three == 'X') || (three == 'O'))) {
                    printf("This place is taken\nPlease enter another number :\n");
                    scanf("%d", &position);
                }
                while (position == 4 && ((four == 'X') || (four == 'O'))) {
                    printf("This place is taken\nPlease enter another number :\n");
                    scanf("%d", &position);
                }
                while (position == 5 && ((five == 'X') || (five == 'O'))) {
                    printf("This place is taken\nPlease enter another number :\n");
                    scanf("%d", &position);
                }
                while (position == 6 && ((six == 'X') || (six == 'O'))) {
                    printf("This place is taken\nPlease enter another number :\n");
                    scanf("%d", &position);
                }
                while (position == 7 && ((seven == 'X') || (seven == 'O'))) {
                    printf("This place is taken\nPlease enter another number :\n");
                    scanf("%d", &position);
                }
                while (position == 8 && ((eight == 'X') || (eight == 'O'))) {
                    printf("This place is taken\nPlease enter another number :\n");
                    scanf("%d", &position);
                }
                while (position == 9 && ((nine == 'X') || (nine == 'O'))) {
                    printf("This place is taken\nPlease enter another number :\n");
                    scanf("%d", &position);
                }

                if ((position == 1) && (one == ' ')) {
                    break;
                } else if ((position == 2) && (two == ' ')) {
                    break;
                } else if ((position == 3) && (three == ' ')) {
                    break;
                } else if ((position == 4) && (four == ' ')) {
                    break;
                } else if ((position == 5) && (five == ' ')) {
                    break;
                } else if ((position == 6) && (six == ' ')) {
                    break;
                } else if ((position == 7) && (seven == ' ')) {
                    break;
                } else if ((position == 8) && (eight == ' ')) {
                    break;
                } else if ((position == 9) && (nine == ' ')) {
                    break;
                } else {
                    continue;
                }
            }

            /*Putting player sign in selected place*/

            if (position == 1) {
                one = 'X';
            } else if (position == 2) {
                two = 'X';
            } else if (position == 3) {
                three = 'X';
            } else if (position == 4) {
                four = 'X';
            } else if (position == 5) {
                five = 'X';
            } else if (position == 6) {
                six = 'X';
            } else if (position == 7) {
                seven = 'X';
            } else if (position == 8) {
                eight = 'X';
            } else if (position == 9) {
                nine = 'X';
            }
        }

        /*Printing Table*/

        printf(" %c | %c | %c \n-----------\n %c | %c | %c \n-----------\n %c | %c | %c \n", one, two, three, four,
               five, six, seven, eight, nine);

        /*Checking Win Situations*/

        if ((one == 'X') && (two == 'X') && (three == 'X')) {
            printf("Player X Win\n");
            int exit = 0;
            printf("To play another game enter 1\nFor exit 2\n");
            scanf("%d", &exit);
            while ((exit != 1) && (exit != 2)) {
                printf("Please enter correct number :\n");
                scanf("%d", &exit);
            }
            if (exit == 1) {
                one = ' ';
                two = ' ';
                three = ' ';
                four = ' ';
                five = ' ';
                six = ' ';
                seven = ' ';
                eight = ' ';
                nine = ' ';
                round = 0;
                continue;
            } else if (exit == 2) {
                break;
            }
        } else if ((four == 'X') && (five == 'X') && (six == 'X')) {
            printf("Player X Win\n");
            int exit = 0;
            printf("To play another game enter 1\nFor exit 2\n");
            scanf("%d", &exit);
            while ((exit != 1) && (exit != 2)) {
                printf("Please enter correct number :\n");
                scanf("%d", &exit);
            }
            if (exit == 1) {
                one = ' ';
                two = ' ';
                three = ' ';
                four = ' ';
                five = ' ';
                six = ' ';
                seven = ' ';
                eight = ' ';
                nine = ' ';
                round = 0;
                continue;
            } else if (exit == 2) {
                break;
            }
        } else if ((seven == 'X') && (eight == 'X') && (nine == 'X')) {
            printf("Player X Win\n");
            int exit = 0;
            printf("To play another game enter 1\nFor exit 2\n");
            scanf("%d", &exit);
            while ((exit != 1) && (exit != 2)) {
                printf("Please enter correct number :\n");
                scanf("%d", &exit);
            }
            if (exit == 1) {
                one = ' ';
                two = ' ';
                three = ' ';
                four = ' ';
                five = ' ';
                six = ' ';
                seven = ' ';
                eight = ' ';
                nine = ' ';
                round = 0;
                continue;
            } else if (exit == 2) {
                break;
            }
        } else if ((one == 'X') && (four == 'X') && (seven == 'X')) {
            printf("Player X Win\n");
            int exit = 0;
            printf("To play another game enter 1\nFor exit 2\n");
            scanf("%d", &exit);
            while ((exit != 1) && (exit != 2)) {
                printf("Please enter correct number :\n");
                scanf("%d", &exit);
            }
            if (exit == 1) {
                one = ' ';
                two = ' ';
                three = ' ';
                four = ' ';
                five = ' ';
                six = ' ';
                seven = ' ';
                eight = ' ';
                nine = ' ';
                round = 0;
                continue;
            } else if (exit == 2) {
                break;
            }
        } else if ((two == 'X') && (five == 'X') && (eight == 'X')) {
            printf("Player X Win\n");
            int exit = 0;
            printf("To play another game enter 1\nFor exit 2\n");
            scanf("%d", &exit);
            while ((exit != 1) && (exit != 2)) {
                printf("Please enter correct number :\n");
                scanf("%d", &exit);
            }
            if (exit == 1) {
                one = ' ';
                two = ' ';
                three = ' ';
                four = ' ';
                five = ' ';
                six = ' ';
                seven = ' ';
                eight = ' ';
                nine = ' ';
                round = 0;
                continue;
            } else if (exit == 2) {
                break;
            }
        } else if ((three == 'X') && (six == 'X') && (nine == 'X')) {
            printf("Player X Win\n");
            int exit = 0;
            printf("To play another game enter 1\nFor exit 2\n");
            scanf("%d", &exit);
            while ((exit != 1) && (exit != 2)) {
                printf("Please enter correct number :\n");
                scanf("%d", &exit);
            }
            if (exit == 1) {
                one = ' ';
                two = ' ';
                three = ' ';
                four = ' ';
                five = ' ';
                six = ' ';
                seven = ' ';
                eight = ' ';
                nine = ' ';
                round = 0;
                continue;
            } else if (exit == 2) {
                break;
            }
        } else if ((one == 'X') && (five == 'X') && (nine == 'X')) {
            printf("Player X Win\n");
            int exit = 0;
            printf("To play another game enter 1\nFor exit 2\n");
            scanf("%d", &exit);
            while ((exit != 1) && (exit != 2)) {
                printf("Please enter correct number :\n");
                scanf("%d", &exit);
            }
            if (exit == 1) {
                one = ' ';
                two = ' ';
                three = ' ';
                four = ' ';
                five = ' ';
                six = ' ';
                seven = ' ';
                eight = ' ';
                nine = ' ';
                round = 0;
                continue;
            } else if (exit == 2) {
                break;
            }
        } else if ((three == 'X') && (five == 'X') && (seven == 'X')) {
            printf("Player X Win\n");
            int exit = 0;
            printf("To play another game enter 1\nFor exit 2\n");
            scanf("%d", &exit);
            while ((exit != 1) && (exit != 2)) {
                printf("Please enter correct number :\n");
                scanf("%d", &exit);
            }
            if (exit == 1) {
                one = ' ';
                two = ' ';
                three = ' ';
                four = ' ';
                five = ' ';
                six = ' ';
                seven = ' ';
                eight = ' ';
                nine = ' ';
                round = 0;
                continue;
            } else if (exit == 2) {
                break;
            }
        }

        round++;

        /*Draw Situation*/

        if (round >= 9) {
            printf("Game Draw\nNo one wins\n");
            int exit = 0;
            printf("To play another game enter 1\nFor exit 2\n");
            scanf("%d", &exit);
            while ((exit != 1) && (exit != 2)) {
                printf("Please enter correct number :\n");
                scanf("%d", &exit);
            }
            if (exit == 1) {
                one = ' ';
                two = ' ';
                three = ' ';
                four = ' ';
                five = ' ';
                six = ' ';
                seven = ' ';
                eight = ' ';
                nine = ' ';
                round = 0;
                continue;
            } else if (exit == 2) {
                break;
            }
        }

        printf("Player O turn\nPLease enter a number from 1 to 9 :\n");

        {
            scanf("%d", &position);

            while (1) {

                /*Correct Input Check (Out of Range number)*/

                while (position != 1 && position != 2 && position != 3 && position != 4
                       && position != 5 && position != 6 && position != 7 && position != 8 && position != 9) {
                    printf("Please enter correct number :\n");
                    scanf("%d", &position);
                }

                /*Correct Input Check (Non empty place)*/

                while (position == 1 && ((one == 'X') || (one == 'O'))) {
                    printf("This place is taken\nPlease enter another number :\n");
                    scanf("%d", &position);
                }
                while (position == 2 && ((two == 'X') || (two == 'O'))) {
                    printf("This place is taken\nPlease enter another number :\n");
                    scanf("%d", &position);
                }
                while (position == 3 && ((three == 'X') || (three == 'O'))) {
                    printf("This place is taken\nPlease enter another number :\n");
                    scanf("%d", &position);
                }
                while (position == 4 && ((four == 'X') || (four == 'O'))) {
                    printf("This place is taken\nPlease enter another number :\n");
                    scanf("%d", &position);
                }
                while (position == 5 && ((five == 'X') || (five == 'O'))) {
                    printf("This place is taken\nPlease enter another number :\n");
                    scanf("%d", &position);
                }
                while (position == 6 && ((six == 'X') || (six == 'O'))) {
                    printf("This place is taken\nPlease enter another number :\n");
                    scanf("%d", &position);
                }
                while (position == 7 && ((seven == 'X') || (seven == 'O'))) {
                    printf("This place is taken\nPlease enter another number :\n");
                    scanf("%d", &position);
                }
                while (position == 8 && ((eight == 'X') || (eight == 'O'))) {
                    printf("This place is taken\nPlease enter another number :\n");
                    scanf("%d", &position);
                }
                while (position == 9 && ((nine == 'X') || (nine == 'O'))) {
                    printf("This place is taken\nPlease enter another number :\n");
                    scanf("%d", &position);
                }

                if ((position == 1) && (one == ' ')) {
                    break;
                } else if ((position == 2) && (two == ' ')) {
                    break;
                } else if ((position == 3) && (three == ' ')) {
                    break;
                } else if ((position == 4) && (four == ' ')) {
                    break;
                } else if ((position == 5) && (five == ' ')) {
                    break;
                } else if ((position == 6) && (six == ' ')) {
                    break;
                } else if ((position == 7) && (seven == ' ')) {
                    break;
                } else if ((position == 8) && (eight == ' ')) {
                    break;
                } else if ((position == 9) && (nine == ' ')) {
                    break;
                } else {
                    continue;
                }
            }

            /*Putting player sign in selected place*/

            if (position == 1) {
                one = 'O';
            } else if (position == 2) {
                two = 'O';
            } else if (position == 3) {
                three = 'O';
            } else if (position == 4) {
                four = 'O';
            } else if (position == 5) {
                five = 'O';
            } else if (position == 6) {
                six = 'O';
            } else if (position == 7) {
                seven = 'O';
            } else if (position == 8) {
                eight = 'O';
            } else if (position == 9) {
                nine = 'O';
            }
        }

        /*Printing Table*/

        printf(" %c | %c | %c \n-----------\n %c | %c | %c \n-----------\n %c | %c | %c \n", one, two, three, four,
               five, six, seven, eight, nine);

        /*Checking Win Situations*/

        if ((one == 'O') && (two == 'O') && (three == 'O')) {
            printf("Player O Win\n");
            int exit = 0;
            printf("To play another game enter 1\nFor exit 2\n");
            scanf("%d", &exit);
            while ((exit != 1) && (exit != 2)) {
                printf("Please enter correct number :\n");
                scanf("%d", &exit);
            }
            if (exit == 1) {
                one = ' ';
                two = ' ';
                three = ' ';
                four = ' ';
                five = ' ';
                six = ' ';
                seven = ' ';
                eight = ' ';
                nine = ' ';
                round = 0;
                continue;
            } else if (exit == 2) {
                break;
            }
        } else if ((four == 'O') && (five == 'O') && (six == 'O')) {
            printf("Player O Win\n");
            int exit = 0;
            printf("To play another game enter 1\nFor exit 2\n");
            scanf("%d", &exit);
            while ((exit != 1) && (exit != 2)) {
                printf("Please enter correct number :\n");
                scanf("%d", &exit);
            }
            if (exit == 1) {
                one = ' ';
                two = ' ';
                three = ' ';
                four = ' ';
                five = ' ';
                six = ' ';
                seven = ' ';
                eight = ' ';
                nine = ' ';
                round = 0;
                continue;
            } else if (exit == 2) {
                break;
            }
        } else if ((seven == 'O') && (eight == 'O') && (nine == 'O')) {
            printf("Player O Win\n");
            int exit = 0;
            printf("To play another game enter 1\nFor exit 2\n");
            scanf("%d", &exit);
            while ((exit != 1) && (exit != 2)) {
                printf("Please enter correct number :\n");
                scanf("%d", &exit);
            }
            if (exit == 1) {
                one = ' ';
                two = ' ';
                three = ' ';
                four = ' ';
                five = ' ';
                six = ' ';
                seven = ' ';
                eight = ' ';
                nine = ' ';
                round = 0;
                continue;
            } else if (exit == 2) {
                break;
            }
        } else if ((one == 'O') && (four == 'O') && (seven == 'O')) {
            printf("Player O Win\n");
            int exit = 0;
            printf("To play another game enter 1\nFor exit 2\n");
            scanf("%d", &exit);
            while ((exit != 1) && (exit != 2)) {
                printf("Please enter correct number :\n");
                scanf("%d", &exit);
            }
            if (exit == 1) {
                one = ' ';
                two = ' ';
                three = ' ';
                four = ' ';
                five = ' ';
                six = ' ';
                seven = ' ';
                eight = ' ';
                nine = ' ';
                round = 0;
                continue;
            } else if (exit == 2) {
                break;
            }
        } else if ((two == 'O') && (five == 'O') && (eight == 'O')) {
            printf("Player O Win\n");
            int exit = 0;
            printf("To play another game enter 1\nFor exit 2\n");
            scanf("%d", &exit);
            while ((exit != 1) && (exit != 2)) {
                printf("Please enter correct number :\n");
                scanf("%d", &exit);
            }
            if (exit == 1) {
                one = ' ';
                two = ' ';
                three = ' ';
                four = ' ';
                five = ' ';
                six = ' ';
                seven = ' ';
                eight = ' ';
                nine = ' ';
                round = 0;
                continue;
            } else if (exit == 2) {
                break;
            }
        } else if ((three == 'O') && (six == 'O') && (nine == 'O')) {
            printf("Player O Win\n");
            int exit = 0;
            printf("To play another game enter 1\nFor exit 2\n");
            scanf("%d", &exit);
            while ((exit != 1) && (exit != 2)) {
                printf("Please enter correct number :\n");
                scanf("%d", &exit);
            }
            if (exit == 1) {
                one = ' ';
                two = ' ';
                three = ' ';
                four = ' ';
                five = ' ';
                six = ' ';
                seven = ' ';
                eight = ' ';
                nine = ' ';
                round = 0;
                continue;
            } else if (exit == 2) {
                break;
            }
        } else if ((one == 'O') && (five == 'O') && (nine == 'O')) {
            printf("Player O Win\n");
            int exit = 0;
            printf("To play another game enter 1\nFor exit 2\n");
            scanf("%d", &exit);
            while ((exit != 1) && (exit != 2)) {
                printf("Please enter correct number :\n");
                scanf("%d", &exit);
            }
            if (exit == 1) {
                one = ' ';
                two = ' ';
                three = ' ';
                four = ' ';
                five = ' ';
                six = ' ';
                seven = ' ';
                eight = ' ';
                nine = ' ';
                round = 0;
                continue;
            } else if (exit == 2) {
                break;
            }
        } else if ((three == 'O') && (five == 'O') && (seven == 'O')) {
            printf("Player O Win\n");
            int exit = 0;
            printf("To play another game enter 1\nFor exit 2\n");
            scanf("%d", &exit);
            while ((exit != 1) && (exit != 2)) {
                printf("Please enter correct number :\n");
                scanf("%d", &exit);
            }
            if (exit == 1) {
                one = ' ';
                two = ' ';
                three = ' ';
                four = ' ';
                five = ' ';
                six = ' ';
                seven = ' ';
                eight = ' ';
                nine = ' ';
                round = 0;
                continue;
            } else if (exit == 2) {
                break;
            }
        }

        /*Draw Situation*/

        if (round >= 9) {
            printf("Game Draw\nNo one wins\n");
            int exit = 0;
            printf("To play another game enter 1\nFor exit 2\n");
            scanf("%d", &exit);
            while ((exit != 1) && (exit != 2)) {
                printf("Please enter correct number :\n");
                scanf("%d", &exit);
            }
            if (exit == 1) {
                one = ' ';
                two = ' ';
                three = ' ';
                four = ' ';
                five = ' ';
                six = ' ';
                seven = ' ';
                eight = ' ';
                nine = ' ';
                round = 0;
                continue;
            } else if (exit == 2) {
                break;
            }
        }
    }

    return 0;
}
