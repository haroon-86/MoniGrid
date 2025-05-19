#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void load_rtu_config(const char* filename) {
    FILE *file = fopen(filename, "r");
    if (!file) {
        printf("Error: Cannot open RTU config file.\n");
        return;
    }

    char line[100];
    printf("\n--- RTU Configuration ---\n");
    while (fgets(line, sizeof(line), file)) {
        printf("%s", line);
    }
    fclose(file);
}