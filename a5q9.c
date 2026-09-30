#include <stdio.h>


#define READ    1   
#define WRITE   2   
#define EXECUTE 4   
#define DELETE  8   
#define ADMIN   16  
int main() {
    int permissions;

    printf("Enter permissions integer value: ");
    fflush(stdout);
    scanf("%d", &permissions);

    // 1. Detect and print specific active bits
    printf("\n--- Detected Bits ---\n");
    int has_any_bit = 0;

    if (permissions & READ) {
        printf("- READ (1)\n");
        has_any_bit = 1;
    }
    if (permissions & WRITE) {
        printf("- WRITE (2)\n");
        has_any_bit = 1;
    }
    if (permissions & EXECUTE) {
        printf("- EXECUTE (4)\n");
        has_any_bit = 1;
    }
    if (permissions & DELETE) {
        printf("- DELETE (8)\n");
        has_any_bit = 1;
    }
    if (permissions & ADMIN) {
        printf("- ADMIN (16)\n");
        has_any_bit = 1;
    }

    if (!has_any_bit) {
        printf("None\n");
    }

    
    printf("\n--- Access Result ---\n");

    if (permissions & ADMIN) {
        printf("Full access: admin\n");
    } 
    else if ((permissions & DELETE) && (permissions & WRITE)) {
        printf("Access: delete and write\n");
    } 
    else if ((permissions & EXECUTE) && !(permissions & WRITE)) {
        printf("Access: execute only\n");
    } 
    else if ((permissions & READ) && !(permissions & WRITE) && !(permissions & EXECUTE)) {
        printf("Access: read-only\n");
    } 
    else if (!(permissions & (READ | WRITE | EXECUTE | DELETE | ADMIN))) {
        printf("Access denied\n");
    } 
    else {
        printf("Access: custom permissions\n");
    }

    return 0;
}