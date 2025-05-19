#include <stdio.h>
#include <time.h>

void send_protocol_message() {
    printf("\n--- Protocol Simulation ---\n");
    printf("Sending Modbus-like message: READ_COILS\n");
    printf("Response: RTU Coil Status: ON\n");
}

void log_patch(const char* log) {
    FILE *file = fopen("logs/patches.log", "a");
    if (!file) return;
    time_t now = time(NULL);
    fprintf(file, "%s - %s", ctime(&now), log);
    fclose(file);
}