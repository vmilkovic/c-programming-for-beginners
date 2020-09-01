// write a function to count the number of characters in a string (length)
// cannot use the strlen library function
// function should take a character array as a parameter
// should return an int (the length)

// write a function to concatenate two character string
// cannot use the strcat library function
// function should take 3 parameters
// char result[]
// const char str1[]
// const char str2[]
// can return void

#include "stdio.h"
#include "stdlib.h"
#include "stdbool.h"

int stringLength(const char string[]);
void concat(char result[], const char str1[], const char str2[]);
bool equalStrings(const char s1[], const char s2[]);

int stringLength(const char string[]){

    int count = 0;

    while( string[count] != '\0'){
        ++count;
    }

    return count;
}

void concat(char result[], const char str1[], const char str2[]){

    int i, j;

    for(i = 0; str1[i] != '\0'; ++i){
        result[i] = str1[i];
    }

    for(j = 0; str2[j] != '\0'; ++j){
        result[i + j] = str2[j];
    }

    result[i+j] = '\0';
}

bool equalStrings(const char s1[], const char s2[]){

    int i = 0;
    bool isEquals = false;

    while(s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
        ++i;

    if(s1[i] == '\0' && s2[i] == '\0')
        isEquals = true;

    return isEquals;

}

int main(void){

    const char word1[] = "vedran";
    const char word2[] = "ok";
    const char word3[] = "hello";

    char result[50];

    printf("Word1 length is %d\n", stringLength(word1));
    printf("Word2 length is %d\n", stringLength(word2));
    printf("Word3 length is %d\n", stringLength(word3));

    concat(result, word1, word2);
    printf("\n%s", result);

    printf("\n%d", equalStrings("Vedran", "Vedran"));
    printf("\n%d", equalStrings("Vedrann", "Vedran"));

    return 0;
}

