#include<stdio.h>

int main() {
    char sentence1[100] = "Be a Top Programmer";
    char sentence2[100];
    int i;
    for(i=0; sentence1[i] != '\0'; i++) {
        sentence2[i] = sentence1[i];
    }
    sentence2[i] = '\0';
    printf("%s\n", sentence2);
    return 0;
}
