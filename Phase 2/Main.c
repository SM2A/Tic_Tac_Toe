#include <stdio.h>

#define TRUE 1
#define EMPTYCELL ' '
#define TABLEFORMAT " %c | %c | %c \n-----------\n %c | %c | %c \n-----------\n %c | %c | %c \n"
#define POSITIONINPUTFORMAT "Player %c turn\nPLease enter a number from 1 to 9 :\n"
#define X 'X'
#define O 'O'

void welcome(int);
void printTable(char[]);
int inputCheck(char[], int);
int endCheck(char[], char);
int newGame(char[]);
char roundTurn(int);
void updateGameData(int, char[], char);

int main() {

    int round = 0;
    char cells[10] = {EMPTYCELL, EMPTYCELL, EMPTYCELL, EMPTYCELL, EMPTYCELL, EMPTYCELL, EMPTYCELL, EMPTYCELL, EMPTYCELL,EMPTYCELL};
    int position;
    welcome(1);
    int end;

    while (TRUE) {

        round++;
        printf(POSITIONINPUTFORMAT, roundTurn(round));
        position = inputCheck(cells, position);
        updateGameData(position, cells, roundTurn(round));
        printTable(cells);
        end = endCheck(cells, roundTurn(round));

        if (end == TRUE) {

            int newGameVal = newGame(cells);

            if (newGameVal == 1) {
                round = 0;
                welcome(2);
                continue;
            } else if (newGameVal == 2) break;
        }
    }
    return 0;
}

void welcome(int gameNum) {

    if (gameNum == 1) {

        printf("Hello\nWellCome to Tic Tac Toe\n");
        printf("PLease enter a number from map bellow\n"
               ""TABLEFORMAT, '1', '2', '3', '4', '5', '6', '7', '8', '9');
    } else if (gameNum == 2)
        printf("PLease enter a number from map bellow\n"
               ""TABLEFORMAT, '1', '2', '3', '4', '5', '6', '7', '8', '9');
    else printf("????");
}
void printTable(char cells[]) {

    printf(TABLEFORMAT, cells[1], cells[2], cells[3], cells[4],
           cells[5], cells[6], cells[7], cells[8], cells[9]);
}
int inputCheck(char cells[], int position) {

    while (TRUE) {

        fflush(stdin);
        scanf("%d", &position);

        if (((position == 1) && (cells[1] == EMPTYCELL))
            || ((position == 2) && (cells[2] == EMPTYCELL))
            || ((position == 3) && (cells[3] == EMPTYCELL))
            || ((position == 4) && (cells[4] == EMPTYCELL))
            || ((position == 5) && (cells[5] == EMPTYCELL))
            || ((position == 6) && (cells[6] == EMPTYCELL))
            || ((position == 7) && (cells[7] == EMPTYCELL))
            || ((position == 8) && (cells[8] == EMPTYCELL))
            || ((position == 9) && (cells[9] == EMPTYCELL))) {
            break;
        } else {
            printf("Please enter correct number :\n");
            continue;
        }
    }
    return position;
}
int endCheck(char cells[], char turn) {

    if (((cells[1] == turn) && (cells[2] == turn) && (cells[3] == turn))
        || ((cells[4] == turn) && (cells[5] == turn) && (cells[6] == turn))
        || ((cells[7] == turn) && (cells[8] == turn) && (cells[9] == turn))
        || ((cells[1] == turn) && (cells[4] == turn) && (cells[7] == turn))
        || ((cells[2] == turn) && (cells[5] == turn) && (cells[8] == turn))
        || ((cells[3] == turn) && (cells[6] == turn) && (cells[9] == turn))
        || ((cells[1] == turn) && (cells[5] == turn) && (cells[9] == turn))
        || ((cells[3] == turn) && (cells[5] == turn) && (cells[7] == turn))) {

        printf("Player %c Wins\n", turn);
        return TRUE;

    } else if ((cells[1] != EMPTYCELL) && (cells[2] != EMPTYCELL) && (cells[3] != EMPTYCELL)
               && (cells[4] != EMPTYCELL) && (cells[5] != EMPTYCELL) && (cells[6] != EMPTYCELL)
               && (cells[7] != EMPTYCELL) && (cells[8] != EMPTYCELL) && (cells[9] != EMPTYCELL)) {

        printf("Game Draw\nNo One Win\n");
        return TRUE;
    }
}
int newGame(char cells[]) {

    int exit;

    printf("To play another game enter 1\nFor exit 2\n");
    scanf("%d", &exit);
    while ((exit != 1) && (exit != 2)) {
        fflush(stdin);
        printf("Please enter correct number :\n");
        scanf("%d", &exit);
    }
    if (exit == 1) {
        for (int i = 0; i < 11; i++) cells[i] = EMPTYCELL;
        return 1;
    } else if (exit == 2) {
        return 2;
    }
}
char roundTurn(int round) {

    if ((round % 2) == 1) return X;
    else if ((round % 2) == 0) return O;
    else return '?';
}
void updateGameData(int position, char cells[], char turn) {

    cells[position] = turn;
}
