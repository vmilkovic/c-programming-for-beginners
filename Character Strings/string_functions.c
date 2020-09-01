#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){
    
    // string length
    char myString[] = "my string";
    printf("The length of this string is: %lu\n", strlen(myString));

    // string copy
    char src[50], dest[50];
    strcpy(src, "This is source");
    printf("%s\n", src);

    // max num of characters
    memset(dest, '\0', sizeof(dest));
    strcpy(src, "Hello how are you doing\n");
    strncpy(dest, src, 10);

    printf("%s", src);

    // searching a string
    char str[] = "The quick brown fox\n";
    char ch = 'q';
    char *pGot_char = NULL;
    pGot_char = strchr(str, ch);
    printf("%s", pGot_char);

    char text[] = "Every dog has his day";
    char word[] = "dog";
    char *pFound = NULL;
    pFound = strstr(text, word);
    printf("%s\n", pFound);

    // tokenizing a string
    char hello_name[80] = "Hello how are you - my name is - vedran";
    const char s[2] = "-";
    char *token;

    token = strtok(hello_name, s);

    while( token != NULL ){
        printf("%s\n", token);
        token = strtok(NULL, s);
    }

    // analyzing a string
    char buf[100];
    int nLetters = 0;
    int nDigits = 0;
    int nPunct = 0;

    printf("Enter an interesting string of less than %d characters\n", 100);
    scanf("%s", buf);

    int i = 0;
    while(buf[i]){
        if(isalpha(buf[i]))
            ++nLetters;
        else if(isdigit(buf[i]))
            ++nDigits;
        else if(ispunct(buf[i]))
            ++nPunct;
        ++i;
    }

    printf("Your string contains %d letter, %d digits and %d punctuation characters", nLetters, nDigits, nPunct);

    return 0;
}
