#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <raylib.h>

#define RAYGUI_IMPLEMENTATION
#include "raygui.h"

void randomPhrase();
char phrases[20][100];

int main() 
{
    randomPhrase();
    return 0;
}

void randomPhrase()
{
    srand(time(NULL));
    int n = rand() % 20;
    char* p = phrases[n];
    printf("%s\n", p);
}

char phrases[20][100] = {
    "Better to have loved than lost then lost then than",
    "No income restrictions! No citizenship test!",
    "Always give up",
    "Never try",
    "Why use many words when few words do trick?",
    "I don't believe in vitamins!",
    "This is the seventh phrase",
    "I'm gonna lose my mind",
    "Programming is the art of programming",
    "Try again later",
    "Don't try again later lmao",
    "What is happening?",
    "What is the kosher status of a sneaker?",
    "If I'm so magic, how come I only have 20 stupid phrases?",
    "Have you ever been to a Krispy Kreme? Was it crispy?",
    "The pen is mighter than the pencil",
    "He who laughs last laughs",
    "He who grabs a cat by the tail learns something he can learn no other way",
    "Better to be silent and thought a fool than to open one's mouth and remove all doubt",
    "Better to open one's mouth and be a fool than to be silent",
};