#include <stdio.h>
#include <string.h>

void printFrequency(int freq[])
{
    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            printf("%c%d",i+'a', freq[i]);
        }
    }
}

void findFrequncy(char S[])
{
    int i = 0;
    int freq[26] = { 0 };
    while (S[i] != '\0') {
        freq[S[i] - 'a']++;
        i++;
    }
    printFrequency(freq);
}

int main()
{
    char S[1000];
    scanf("%s",S);
    findFrequncy(S);
}
