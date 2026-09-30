#include <stdio.h>

int main() {
    int time_of_day, motion, light_level, room, cooking = 0;

    // 1. Accept general sensor inputs
    printf("Enter time of day (0-23): ");
    fflush(stdout);
    scanf("%d", &time_of_day);

    printf("Enter motion detected (1 for Yes, 0 for No): ");
    fflush(stdout);
    scanf("%d", &motion);

    printf("Enter light level (0-100): ");
    fflush(stdout);
    scanf("%d", &light_level);

    // 2. Room Selection Menu
    printf("\n=== Select Room ===\n");
    printf("1. Living Room\n");
    printf("2. Bedroom\n");
    printf("3. Kitchen\n");
    printf("Enter choice (1-3): ");
    fflush(stdout);
    scanf("%d", &room);

    printf("\n--- Smart Home Status ---\n");

    // 3. Nested Decision Structure per Room
    switch (room) {
        case 1:
            printf("Location: Living Room\n");

            if (time_of_day >= 23 || time_of_day < 6) {
                printf("Mode: Night Mode\nAction: Lights OFF\n");
            } 
            else if (motion == 0) {
                printf("Mode: Away Mode\nAction: All OFF\n");
            } 
            else if (time_of_day >= 6 && time_of_day < 18) {
                printf("Mode: Day Mode\nAction: Lights ON\n");
            } 
            else if (time_of_day >= 18 && time_of_day < 23) {
                printf("Mode: Evening Mode\nAction: Dim lights\n");
            }
            break;

        case 2:
            printf("Location: Bedroom\n");

            if (time_of_day >= 23 || time_of_day < 6) {
                printf("Mode: Night Mode\nAction: Lights OFF\n");
            } 
            else if (motion == 0) {
                printf("Mode: Away Mode\nAction: All OFF\n");
            } 
            else if (time_of_day >= 6 && time_of_day < 18) {
                printf("Mode: Day Mode\nAction: Lights ON\n");
            } 
            else if (time_of_day >= 18 && time_of_day < 23) {
                printf("Mode: Evening Mode\nAction: Dim lights\n");
            }
            break;

        case 3:
            printf("Location: Kitchen\n");
            
            // Kitchen sub-choice for cooking
            printf("Are you cooking? (1 for Yes, 0 for No): ");
            fflush(stdout);
            scanf("%d", &cooking);

            if (time_of_day >= 23 || time_of_day < 6) {
                printf("Mode: Night Mode\nAction: Lights OFF\n");
            } 
            else if (motion == 0) {
                printf("Mode: Away Mode\nAction: All OFF\n");
            } 
            else if (time_of_day >= 6 && time_of_day < 18) {
                printf("Mode: Day Mode\nAction: Lights ON\n");
            } 
            else if (time_of_day >= 18 && time_of_day < 23) {
                printf("Mode: Evening Mode\nAction: Dim lights\n");
            }

            // Kitchen specific override logic
            if (cooking == 1) {
                printf("Special Appliance Action: Exhaust fan ON\n");
            }
            break;

        default:
            printf("Invalid room selection.\n");
            break;
    }

    return 0;
}