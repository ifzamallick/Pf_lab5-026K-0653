#include <stdio.h>

int main() {
    int attendance;
    float marks, income;

    while (1) {
 
        printf("Enter marks: ");
        scanf("%f", &marks);
        if (marks < 50) {
            printf("Not eligible due to low marks.\n");
            break;
        }

        // 2. Check Attendance
        printf("Enter attendance (%%): ");
        scanf("%d", &attendance);
        if (attendance < 75) {
            printf("Not eligible due to low attendance.\n");
            break;}

        // 3. Check Income
        printf("Enter family income: ");
        scanf("%f", &income);
        if (income > 80000) {
            printf("Ineligible. High income.\n");
            break;
        }

        if (marks > 90 && attendance >= 85) {
            printf("\nResult: Full Scholarship\n");
        } 
        else if (marks >= 75 && attendance >= 85) {
            printf("\nResult: Half Scholarship\n");
        } 
        else {
            printf("\nResult: Quarter scholarship\n");
        }

        break;
    }

    printf("Program ended.\n");
    return 0;
}
