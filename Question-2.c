#include <stdio.h>

int main() {
    char str[100];
    int i, j, count;
    int freq[100] = {0};

    printf("Enter any string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++)
    {
        count = 1;
        if (freq[i] != -1)
        {
            for (j = i + 1; str[j] != '\0'; j++)
            {
                if (str[i] == str[j])
                {
                    count++;
                    freq[j] = -1;
                }
            }
            freq[i] = count;
        }
    }

    printf("Frequency of each letter: \n");
    for (i = 0; str[i] != '\0'; i++)
    {
        if (freq[i] != -1)
        {
            printf("%c => %d\n", str[i], freq[i]);
        }
    }

    return 0;
}
