/*
PROGRAMMED BY: AFOLABI OLAJIDE SAMUEL
DATE: 15 JUNE 2020
LANGUAGE: C
TYPE: CONSOLE APPLICATION
*/
#include <stdio.h>
#include <string.h>
#include "headerFile.h"

/* A simple program showing of the wits of c
programming language.
ENJOY!!!
Disclaimer!!! This is purely a beginner programming wit.
*/
main()
{
    // store all variables
    char myName[10];
    char ideA[10], ideB[10];
    int day;
    float accBalance;
    char initial_1, initial_2;
    char checkName[18];

    // asking the information from users
    printf("What is your name\n" );
    scanf(" %s", myName);
    printf("What are your initials (write each on a different line)\n");
    scanf(" %c", &initial_1);
    scanf(" %c", &initial_2);
    printf("What ide do you use (if it is a double word write them on the different lines provided below)\n");
    printf("\nIf it's one word write the word but on the second space write a -\n");
    scanf(" %s", ideA);
    scanf(" %s", ideB);
    printf("For how long (DAYS) have you been using this particular IDE\n");
    scanf(" %d", &day);
    printf("How much do you have as your account balance (format should be as xxx.xxx)\n");
    scanf(" %f", &accBalance);

    // printing the information collected on the screen for the user to see
    printf("\nIf i get you well.\n");
    printf("\nYou said your name is %c.%c.%s and the IDE you use is %s %s for C programming. \n", initial_1, initial_2, myName, ideA, ideB);
    printf("\nAnd also you have only used it for %d days.", day);
    printf("\nYour account balance as you have said is %.3f.", accBalance);

    // family info
    // exploring the use of personal header files
    printf("\n\n\nYou are one out of the %d CHILDREN in the %s family and your name is %s %s. \n", NUMBERINFAMILY, FAMILYNAME, FAMILYNAME, myName);
    printf("\nYour dad's income is $%.4f Dollars.\n", DADINCOME);
    printf("\nAnd you live at %s.", HOUSEADDRESS);
    printf("\n\n\nHave a nice day.");

    // exploring the use of string copy
    printf("\n\nBefore you go lets do a little stuff.");
    printf("\nWhats your name again (another name if you like)\n");
    scanf(" %s", checkName);
    printf("\nNow your name is %s\n", checkName);
    strcpy(checkName, "ABRACADABRA");
    printf("\nBut with the aid of small magic (which is coding) your name is now %s", checkName);
    printf("\nTHANK YOU");
    printf("Press enter to exit");
    scanf("");
    return 0;
}
