#include <stdio.h>

int main(void)
{
    int category_choice = 0;
    int item_choice = 0;
    int quantity = 0;
    int add_more = 0;
    float total_bill = 0.0;

    // Item quantity counters for the itemized bill
    int count_aloo_tikki = 0, count_samosa = 0, count_roll = 0, count_fries = 0;
    int count_aloo_biryani = 0, count_chicken_biryani = 0, count_rice_daal = 0;
    int count_fanta = 0, count_7up = 0, count_water = 0;

    printf("==================================\n");
    printf("     WELCOME TO THE CAFETERIA      \n");
    printf("==================================\n");

    do
    {
        printf("\n--- FOOD CATEGORIES ---\n");
        printf(" 1. Starter\n");
        printf(" 2. Main Course\n");
        printf(" 3. Drinks\n");
        printf(" 4. View Bill & Checkout\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &category_choice);

        switch (category_choice)
        {
        case 1: // Starters
            do
            {
                printf("\n--- STARTER MENU ---\n");
                printf(" 1. Aloo Tikki (rs. 120)\n");
                printf(" 2. Samosa (rs. 50)\n");
                printf(" 3. Roll (rs. 80)\n");
                printf(" 4. French Fries (rs. 60)\n");
                printf("Enter item choice (1-4): ");
                scanf("%d", &item_choice);

                printf("Enter quantity: ");
                scanf("%d", &quantity);

                if (quantity > 0)
                {
                    switch (item_choice)
                    {
                    case 1:
                        count_aloo_tikki += quantity;
                        total_bill += 120 * quantity;
                        printf("-> Added %d x Aloo Tikki\n", quantity);
                        break;
                    case 2:
                        count_samosa += quantity;
                        total_bill += 50 * quantity;
                        printf("-> Added %d x Samosa\n", quantity);
                        break;
                    case 3:
                        count_roll += quantity;
                        total_bill += 80 * quantity;
                        printf("-> Added %d x Roll\n", quantity);
                        break;
                    case 4:
                        count_fries += quantity;
                        total_bill += 60 * quantity;
                        printf("-> Added %d x French Fries\n", quantity);
                        break;
                    default:
                        printf("Invalid starter choice!\n");
                        break;
                    }
                }
                else
                {
                    printf("Quantity must be at least 1.\n");
                }

                printf("\nWould you like to add more starters?\n");
                printf(" 1. YES\n 2. NO (Back to Main Menu)\n");
                printf("Enter choice: ");
                scanf("%d", &add_more);

            } while (add_more == 1);
            break;

        case 2: // Main Course
            do
            {
                printf("\n--- MAIN COURSE MENU ---\n");
                printf(" 1. Aloo Biryani (rs. 250)\n");
                printf(" 2. Chicken Biryani (rs. 300)\n");
                printf(" 3. Rice and Daal (rs. 350)\n");
                printf("Enter item choice (1-3): ");
                scanf("%d", &item_choice);

                printf("Enter quantity: ");
                scanf("%d", &quantity);

                if (quantity > 0)
                {
                    switch (item_choice)
                    {
                    case 1:
                        count_aloo_biryani += quantity;
                        total_bill += 250 * quantity;
                        printf("-> Added %d x Aloo Biryani\n", quantity);
                        break;
                    case 2:
                        count_chicken_biryani += quantity;
                        total_bill += 300 * quantity;
                        printf("-> Added %d x Chicken Biryani\n", quantity);
                        break;
                    case 3:
                        count_rice_daal += quantity;
                        total_bill += 350 * quantity;
                        printf("-> Added %d x Rice and Daal\n", quantity);
                        break;
                    default:
                        printf("Invalid main course choice!\n");
                        break;
                    }
                }
                else
                {
                    printf("Quantity must be at least 1.\n");
                }

                printf("\nWould you like to add more main courses?\n");
                printf(" 1. YES\n 2. NO (Back to Main Menu)\n");
                printf("Enter choice: ");
                scanf("%d", &add_more);

            } while (add_more == 1);
            break;

        case 3: // Drinks
            do
            {
                printf("\n--- DRINKS MENU ---\n");
                printf(" 1. Fanta 500ml (rs. 60)\n");
                printf(" 2. 7UP 500ml (rs. 60)\n");
                printf(" 3. Water bottle (rs. 30)\n");
                printf("Enter item choice (1-3): ");
                scanf("%d", &item_choice);

                printf("Enter quantity: ");
                scanf("%d", &quantity);

                if (quantity > 0)
                {
                    switch (item_choice)
                    {
                    case 1:
                        count_fanta += quantity;
                        total_bill += 60 * quantity;
                        printf("-> Added %d x Fanta 500ml\n", quantity);
                        break;
                    case 2:
                        count_7up += quantity;
                        total_bill += 60 * quantity;
                        printf("-> Added %d x 7UP 500ml\n", quantity);
                        break;
                    case 3:
                        count_water += quantity;
                        total_bill += 30 * quantity;
                        printf("-> Added %d x Water bottle\n", quantity);
                        break;
                    default:
                        printf("Invalid drink choice!\n");
                        break;
                    }
                }
                else
                {
                    printf("Quantity must be at least 1.\n");
                }

                printf("\nWould you like to add more drinks?\n");
                printf(" 1. YES\n 2. NO (Back to Main Menu)\n");
                printf("Enter choice: ");
                scanf("%d", &add_more);

            } while (add_more == 1);
            break;

        case 4: // Checkout & Itemized Bill
            printf("\n==================================\n");
            printf("            FINAL BILL            \n");
            printf("==================================\n");
            
            if (total_bill == 0)
            {
                printf("No items ordered yet!\n");
            }
            else
            {
                printf("Order List:\n");
                if (count_aloo_tikki > 0)
                    printf(" - Aloo Tikki (rs. 120) x %d = rs. %d\n", count_aloo_tikki, count_aloo_tikki * 120);
                if (count_samosa > 0)
                    printf(" - Samosa (rs. 50) x %d = rs. %d\n", count_samosa, count_samosa * 50);
                if (count_roll > 0)
                    printf(" - Roll (rs. 80) x %d = rs. %d\n", count_roll, count_roll * 80);
                if (count_fries > 0)
                    printf(" - French Fries (rs. 60) x %d = rs. %d\n", count_fries, count_fries * 60);

                if (count_aloo_biryani > 0)
                    printf(" - Aloo Biryani (rs. 250) x %d = rs. %d\n", count_aloo_biryani, count_aloo_biryani * 250);
                if (count_chicken_biryani > 0)
                    printf(" - Chicken Biryani (rs. 300) x %d = rs. %d\n", count_chicken_biryani, count_chicken_biryani * 300);
                if (count_rice_daal > 0)
                    printf(" - Rice and Daal (rs. 350) x %d = rs. %d\n", count_rice_daal, count_rice_daal * 350);

                if (count_fanta > 0)
                    printf(" - Fanta 500ml (rs. 60) x %d = rs. %d\n", count_fanta, count_fanta * 60);
                if (count_7up > 0)
                    printf(" - 7UP 500ml (rs. 60) x %d = rs. %d\n", count_7up, count_7up * 60);
                if (count_water > 0)
                    printf(" - Water bottle (rs. 30) x %d = rs. %d\n", count_water, count_water * 30);

                printf("----------------------------------\n");
                printf("Total Amount to Pay: rs. %.2f\n", total_bill);
            }
            
            printf("Thank you for visiting! Please pay at the counter :)\n");
            return 0;

        default:
            printf("Invalid category choice! Please choose between 1 and 4.\n");
            break;
        }

    } while (1);

    return 0;
}
