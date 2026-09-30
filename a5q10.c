#include <stdio.h>


#define TRAINED    1   
#define VALIDATED  2 
#define APPROVED   4 
#define DEPRECATED 8 

int main() {
    float accuracy, confidence, model_score;
    int dataset_size, role, status_flags;

    printf("Enter Accuracy (0-100): ");
    fflush(stdout);
    scanf("%f", &accuracy);

    printf("Enter Confidence Score (0-100): ");
    fflush(stdout);
    scanf("%f", &confidence);

    printf("Enter Dataset Size (number of samples): ");
    fflush(stdout);
    scanf("%d", &dataset_size);

    printf("Enter User Role (1 = Intern, 2 = Engineer, 3 = Admin): ");
    fflush(stdout);
    scanf("%d", &role);

    printf("Enter Status Flags (bitwise integer): ");
    fflush(stdout);
    scanf("%d", &status_flags);


    float dataset_factor = (float)dataset_size / 1000.0f;
    if (dataset_factor > 10.0f) {
        dataset_factor = 10.0f;
    }


    model_score = (accuracy * 0.5f) + (confidence * 0.3f) + (dataset_factor * 2.0f);

    printf("\n--- Assessment Results ---\n");
    printf("Model Score: %.2f\n", model_score);


    printf("Deployment Status: ");
    if (status_flags & DEPRECATED) {
        printf("Rejected: model deprecated\n");
    } 
    else if (!(status_flags & TRAINED)) {
        printf("Rejected: not trained\n");
    } 
    else if (!(status_flags & VALIDATED)) {
        printf("Rejected: not validated\n");
    } 
    else if (!(status_flags & APPROVED)) {
        printf("Pending: awaiting approval\n");
    } 
    else if (accuracy < 70.0f || confidence < 60.0f) {
        printf("Rejected: performance too low\n");
    } 
    else if (dataset_size < 5000) {
        printf("Rejected: dataset too small\n");
    } 
    else if (role == 1) {
        printf("Denied: interns cannot deploy\n");
    } 
    else if (role == 2 && model_score < 80.0f) {
        printf("Denied: engineer needs higher score\n");
    } 
    else {
        printf("Approved for deployment\n");
    }

    
    float avg_acc_conf = (accuracy + confidence) / 2.0f;
    printf("Average of Accuracy & Confidence: %.2f\n", avg_acc_conf);

    if (model_score > avg_acc_conf) {
        printf("Comparison: Model score IS ABOVE the average of accuracy and confidence.\n");
    } else {
        printf("Comparison: Model score IS NOT ABOVE the average of accuracy and confidence.\n");
    }

    printf("\n--- Memory Size (sizeof) ---\n");
    printf("sizeof(accuracy): %lu bytes\n", (unsigned long)sizeof(accuracy));
    printf("sizeof(confidence): %lu bytes\n", (unsigned long)sizeof(confidence));
    printf("sizeof(dataset_size): %lu bytes\n", (unsigned long)sizeof(dataset_size));
    printf("sizeof(role): %lu bytes\n", (unsigned long)sizeof(role));
    printf("sizeof(status_flags): %lu bytes\n", (unsigned long)sizeof(status_flags));
    printf("sizeof(model_score): %lu bytes\n", (unsigned long)sizeof(model_score));

    return 0;
}