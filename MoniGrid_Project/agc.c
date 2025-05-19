#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void simulate_agc() {
    float current_freq = 59.7f + (rand() % 6) / 10.0f;
    printf("\n--- AGC Simulation ---\n");
    printf("Current Frequency: %.2f Hz\n", current_freq);

    if (current_freq < 59.9f) {
        printf("AGC Action: Increase generation.\n");
    } else if (current_freq > 60.1f) {
        printf("AGC Action: Decrease generation.\n");
    } else {
        printf("AGC Action: Frequency stable.\n");
    }
}