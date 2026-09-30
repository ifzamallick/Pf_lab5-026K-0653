#include <stdio.h>

#define READ 1  
#define WRITE 2   
#define EXECUTE 4 

int main() {
    int permissions;

    printf("Enter permissions integer value: ");
    fflush(stdout);
    scanf("%d", &permissions);

    
    if (permissions & EXECUTE) {
        printf("Access granted: full control\n");
    } 
    else {
     
        if ((permissions & READ) && (permissions & WRITE)) {
            printf("Access granted: read and write\n");
        } 
        else if ((permissions & READ) && !(permissions & WRITE)) {
            printf("Access granted: read-only\n");
        } 
        else {
            printf("Access denied\n");
        }
    }

    return 0;
}