#include <stdio.h>
#include <string.h>

char word[20] = "";

int compare(char str[20], int i, int count) {    
    
    if(i < strlen(str)) {        
        if(str[i] == str[strlen(str) - i - 1]) {
            count++;            
            compare(str, i+1, count);            
        } else {            
            return count;            
        }        
    }
      
    
}

int main() {
    
    printf("Entrez le mot: ");
    scanf("%s", &word);
         
    int counter = compare(word, 0, 0);
    
    if (counter == strlen(word)) {
        printf("palindrome");
    } else {
        printf("Non palindrome");
    }
}