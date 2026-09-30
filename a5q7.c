#include <stdio.h>

int main() {
    int category, subtype, delayed;

    // Step 1: Main Category Selection
    printf("Select Category:\n");
    printf("1 = Greeting\n2 = Query\n3 = Complaint\n4 = Feedback\n");
    printf("Enter choice (1-4): ");
    fflush(stdout);
    scanf("%d", &category);

    // Step 2: Nested Switch for Category and Sub-types
    switch (category) {
        case 1: // Greeting
            printf("\nSelect Greeting Type:\n1 = Morning\n2 = Evening\nChoice: ");
            fflush(stdout);
            scanf("%d", &subtype);

            switch (subtype) {
                case 1:
                    printf("Bot Reply: Good morning! How can I assist you today?\n");
                    break;
                case 2:
                    printf("Bot Reply: Good evening! How can I help you tonight?\n");
                    break;
                default:
                    printf("Invalid selection\n");
                    break;
            }
            break;

        case 2: // Query
            printf("\nSelect Query Sub-type:\n1 = Product\n2 = Billing\n3 = Technical\nChoice: ");
            fflush(stdout);
            scanf("%d", &subtype);

            switch (subtype) {
                case 1:
                    printf("Bot Reply: For product details, please visit our online catalog.\n");
                    break;
                case 2:
                    printf("Bot Reply: For billing issues, please check your invoices or payment receipts.\n");
                    break;
                case 3:
                    printf("Bot Reply: Technical Support: Please describe the issue or error code you are facing.\n");
                    break;
                default:
                    printf("Invalid selection\n");
                    break;
            }
            break;

        case 3: // Complaint
            printf("\nSelect Complaint Sub-type:\n1 = Delivery\n2 = Quality\nChoice: ");
            fflush(stdout);
            scanf("%d", &subtype);

            switch (subtype) {
                case 1: // Delivery
                    printf("Is your order delayed? (1 = Yes, 0 = No): ");
                    fflush(stdout);
                    scanf("%d", &delayed);

                    if (delayed == 1) {
                        printf("Bot Reply: We deeply apologize for the delay! We have prioritized your shipment and updated tracking info.\n");
                    } else if (delayed == 0) {
                        printf("Bot Reply: We apologize for the delivery issue. Please provide your order ID for further assistance.\n");
                    } else {
                        printf("Invalid selection\n");
                    }
                    break;

                case 2: // Quality
                    printf("Bot Reply: We apologize for the quality issue. Please submit a claim with item details for a quick replacement.\n");
                    break;

                default:
                    printf("Invalid selection\n");
                    break;
            }
            break;

        case 4: // Feedback
            printf("\nSelect Feedback Sub-type:\n1 = Positive\n2 = Negative\nChoice: ");
            fflush(stdout);
            scanf("%d", &subtype);

            switch (subtype) {
                case 1:
                    printf("Bot Reply: Thank you so much for your positive feedback! We are glad to serve you.\n");
                    break;
                case 2:
                    printf("Bot Reply: Thank you for your feedback. We apologize for falling short and will work to improve.\n");
                    break;
                default:
                    printf("Invalid selection\n");
                    break;
            }
            break;

        default:
            printf("Invalid selection\n");
            break;
    }

    return 0;
}