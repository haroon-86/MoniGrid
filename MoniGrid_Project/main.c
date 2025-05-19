#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "auth.h"
#include "rtu.h"
#include "agc.h"
#include "protocol.h"

int main() {
    srand(time(NULL));
    printf("=== MoniGrid SCADA Simulator ===\n");

    if (!authenticate_operator()) {
        printf("Access Denied.\n");
        return 1;
    }

    load_rtu_config("config.csv");
    simulate_agc();
    send_protocol_message();

    log_patch("Patch applied successfully at runtime.\n");

    return 0;
}