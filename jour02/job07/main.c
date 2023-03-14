#include <stdio.h>
#include <string.h>

int main() {
    char str[320];
    printf("Entrez le mot: ");
    scanf("%s", &str);

    int len = strlen(str);
    int aCounter = 0;
    int eCounter = 0;
    int iCounter = 0;

    for (int i = 0; i < len; i++) {
        if(tolower(str[i]) == 'a') {
            aCounter++;
        } else if (tolower(str[i]) == 'e') {
            eCounter++;
        } else if (tolower(str[i]) == 'i') {
            iCounter++;
        }
    }

    printf("Il y a %d \"A\", %d \"E\" et %d \"I\" dans le mot.", aCounter, eCounter, iCounter);
}