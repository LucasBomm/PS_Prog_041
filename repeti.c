#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void repeti(char* item[], int n) {
    char lista[n][100];
    int i;

    for (i=0; i<n; i++)
        strcpy(lista[i], *item);
}


int main() {
    int n = 3, i;
    char item[] = "sumonado";
    char *lista[n];

    printf("%s\n", item);

    repeti(item, n);

    for (i=0; i<n; i++)
        printf("%s\n", *lista[i]);

	return 0;
}
