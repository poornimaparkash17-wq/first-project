 #include <stdio.h>
void main (void)
{
    int food_category_choice = 0;
    int starter_choice = 0;
    int main_cousre_choice = 0;
    int drink_choice = 0;
    int decision;
 printf("welcome our dear customer:\n");
 printf("\n==================\n");
 printf("\n CAFETARIA MENU\n");
 printf("\n==================\n");
 do
 {
    printf("Choose Food Category from(1-3):\n");
    printf(" 1.Starter \n 2.Main Course \n 3.Drinks\n");
    printf("Enter your choice:");
    scanf("%d", &food_category_choice);

        switch (food_category_choice)
    {
    case 1:
        do
        {
            printf("What would you like for Starter\?");
            printf("\nOptions for Starter are:\n");
            printf("\n 1. Aloo Tikki(rs.120) \n 2. Samosa(rs.50) \n 3. Roll(rs.80) \n 4. French Fries(rs.60)\n");
            printf("Enter your choice:");
            scanf("%d", &starter_choice);

            printf("\nWould you like to add more items\?");
            printf(" \n 1. YES \n 2. NO\n");
            printf("Enter your decision:");
            scanf("%d", &decision);
        
                switch (decision)
                   {
                        case1:
                           printf("Enter your choice from (1-4 again):");
                           scanf("%d",&starter_choice);
                        break;
                        case2:
                            printf("\nWould you like to choose from main course\?");
                        break;
                
                    }
    
        }   while (starter_choice<=1 && starter_choice<=4);
              
    break;   
    case 2:
        do
        {
            printf("What would you like for Main Course\?");
            printf("\nOptions for Main Course are:\n");
            printf("\n 1. Aloo Biryani(rs.250) \n 2. Chicken Biryani(rs.300) \n 3. Rice and Daal(rs.350) \n");
            printf("Enter your choice:");
            scanf("%d", &starter_choice);

            printf("\nWould you like to add more items\?");
            printf(" \n 1. YES \n 2. NO\n");
            printf("Enter your choice:");
            scanf("%d", &decision);
        
                switch (decision)
                   {
                        case 01:
                            printf("Enter your choice from (1-3 again):\n");
                            scanf("%d",&main_cousre_choice);
                        break;
                        case 02:
                            printf("\nWould you like to choose from drinks\?\n");
                        break;
                
                    }
    
        }   while (main_cousre_choice<=1 && main_cousre_choice<=3);
    break;         
    case 3:
        do
        {
            printf("What would you like for Drinks\?");
            printf("\nOptions for Drinks are:\n");
            printf("\n 1. Fanta 500ml(Market rate) \n 2. 7UP 500ml(Market rate) \n 3. Water bottle(Market rate) \n");
            printf("Enter your choice:");
            scanf("%d", &starter_choice);

            printf("\nWould you like to add more items\?");
            printf(" \n 1. YES \n 2. NO\n");
            printf("Enter your decision:");
            scanf("%d", &decision);
        
                switch (decision)
                   {
                        case 001:
                            printf("enter your choice:\n");
                            scanf("%d",&drink_choice);
                        break;
                        case 002:
                            printf("Please pay your bill:)\?");
                        break;
                
                    }
    
        }   while (drink_choice<=1 && drink_choice<=3);
              
    break; 
    } 
 } while (food_category_choice>=1 && food_category_choice<=3);

       
} 
}
