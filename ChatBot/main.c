/* COVID 19 CHATBOT
 * NCU-UAG COLLABORATIVE C PROJECT
 * GROUP: 6
 * COPYRIGHT © GROUP 6
*/

#include <stdio.h>
#include "hospital_1.c" // Importing the hospital script
#include "homecare_1.c" // Importing the homecare script
#include "food-and-meditation_1.c" // Importing food and meditation script
#include "admin.c" // Importing admin portal script

int main(){
    int userInput;

    // Setting up the home page of the bot
    // The home page consists of main menu and title.

    printf("\n=====COVID-19 Chat-Bot=====\n");
    printf("\nMAIN MENU\n\n1. Hospital related queries\n2. Home care related queries\n3. Food and medicine\n4. Admin login");
    printf("\n\nEnter your choice to proceed: ");
    scanf("%d", &userInput);

    // The loop will only proceed if user input is either 1, 2 or 3.
    // If input is not any of the mentioned number, the loop will
    // end the user will automatically exit the bot.

    while (userInput == 1 || userInput == 2 || userInput == 3 || userInput == 4){
        
        // Running the hospital questions script if user input is 1 
        
        if (userInput == 1){
            hospital_1();
            break;
        }

        // Running the home care question script if the user input is 2

        else if (userInput == 2){
            homecare_1();
            break;
        }

        // Running the food and medicine question script if user input is 3

        else if (userInput == 3){
            meditation();
            break;
        }

        // Admin portal

        else if (userInput == 4){
            adminPortal();
            break;
        }

        else{
            break;
        }
    }

    return 0;
}
