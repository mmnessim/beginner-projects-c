#include <stdio.h>
#include <stdlib.h>

int keepPlaying = 0;
int wins;
int losses;
int ties;

enum Choice {
    ROCK = 1,
    PAPER,
    SCISSORS
};

enum Choice getChoice();
enum Choice getCompChoice();
void prompt();
int gameloop();

int main() {
    while(keepPlaying = gameloop()) {
        if (keepPlaying == 0) {
            break;
        }
    }
    return 0;
}

int gameloop() {
    prompt();
    enum Choice userChoice = getChoice();
    enum Choice compChoice = getCompChoice();
    switch (userChoice) {
        case ROCK: 
            printf("You chose rock\n");
            if (compChoice == ROCK) {
                printf("Tie!\n");
                ++ties;
            } else if (compChoice == SCISSORS) {
                printf("You win!\n");
                ++wins;
            } else {
                printf("You lose!\n");
                ++losses;
            }
            break;
        case SCISSORS:
            printf("You chose scissors\n");
            if (compChoice == ROCK) {
                printf("You lose!\n");
                ++losses;
            } else if (compChoice == SCISSORS) {
                printf("Tie!\n");
                ++ties;
            } else {
                printf("You win!\n");
                ++wins;
            }
            break;
        case PAPER:
            printf("You chose paper\n");
            if (compChoice == ROCK) {
                printf("You win!\n");
                ++wins;
            } else if (compChoice == SCISSORS) {
                printf("You lose!\n");
                ++losses;
            } else {
                printf("Tie!\n");
                ++ties;
            }
            break;
    }
    printf("Score: %d wins %d losses %d ties\n", wins, losses, ties);
    printf("Play again? y/n\n");
    int answer;
    while (answer = getchar()) {
        if (answer == 'y') {
            return 1;
        } else if (answer == 'n') {
            return 0;
        }
    }
}

enum Choice getCompChoice() {
    int num = rand() % 3 + 1;
    switch (num) {
        case 1:
            return ROCK;
        case 2: 
            return PAPER;
        case 3:
            return SCISSORS;
        default: 
            return ROCK;
    }
}

void prompt() {
    printf("Rock...\n");
    printf("Paper...\n");
    printf("Scissors...\n");
    printf("Shoot! (enter r/p/s)\n");
}

enum Choice getChoice() {
    int c;
    while ((c = getchar())) {
        switch (c) {
            case 'r':
                return ROCK;
            case 'p':
                return PAPER;
            case 's':
                return SCISSORS;
            case '\n':
                continue;
            default: 
                continue;
            }
    }  
}