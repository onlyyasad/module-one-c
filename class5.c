#include <stdio.h>

/**
 * Scanf
 * More on type specifiers (double and long long)
 * ASCII value (addition and substraction with char)
 * typecasting of char
 * 
 * The necicsity of type casting for calculation average.
 * */

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    // ------------ integer to ascii: ----------- //

    int ascii = 80;
    char ch = ascii;

    printf("Char value of 87 is %c\n", ch);

    //------- find next 3rd character: ----------//

    // char givenChar;
    // scanf("%c", &givenChar);

    // givenChar = givenChar + 3;

    // printf("Character after 3 character of given input is: %c\n", givenChar);

    // --------- distance between 2 char: ---------- //

    // char c1, c2;

    // scanf("%c%c", &c1, &c2);

    // int distance = c2 - c1;

    // printf("Distance between char c1 and c2 is: %d\n", distance);

    // ---------- last two digit from 4 digit number: ---------- //

    char c1, c2, c3, c4;
    
    scanf("%c%c%c%c", &c1, &c2, &c3, &c4);

    printf("Last two digits: %c%c\n", c3, c4);

    return 0;
}
