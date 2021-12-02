/* COVID 19 CHATBOT
   NCU-UAG COLLABORATIVE C PROJECT
   GROUP: 6
   COPYRIGHT © GROUP 6
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h> // For strcmp()

int adminRegistration()
{
    char username[25], getUsername[25], getPin[25], pin[25];
    FILE *fptr; // File pointer

    // Opening the txt file having login data
    fptr = fopen("adminData.txt", "a");

    if (fptr == NULL)
    {
        printf("Error"); // Printing error if file does not exists
    }
    else
    {
    adminRegister:
        printf("Enter username : "); // Requesting for a uniform userId for registration
        scanf("%s", username);

        printf("Enter your PIN : "); // Requesting a uniform digit PIN
        scanf("%s", pin);

        fscanf(fptr, "%s %s", getUsername, getPin);

        if ((strcmp(getUsername, username) == 0))
        {
            printf("Username already taken. Please try again."); // Printing an error in case the user ID is already taken
            goto adminRegister;
        }

        else
        {
            fprintf(fptr, "%s %s", username, pin); // Dumping all fetched details into "adminData.txt" file
            printf("Admin added succesfully!!!");
        }
    }
}

// Designing the main menu of the admin portal
int adminMainMenu()
{

    int userChoice;
    printf("\n=====MAIN MENU=====\n\n1. Add a new admin\n2. Go Back to Main\n\nYour choice: ");
    scanf("%d", &userChoice);

    if (userChoice == 1)
    {
        printf("\n=====NEW ADMIN REGISTRATION=====\n\n");
        adminRegistration();
    }
    else if (userChoice == 2)
    {
        printf("\nGoing back to main panel");
        main();
    }
    
}

int adminPortal()
{

    FILE *fptr; // File pointer
    fptr = fopen("adminData.txt", "r");
    char username[25], getUsername[25], getPin[25], pin[25];
    int flag = 0;

    fscanf(fptr, "%s%s", getUsername, getPin); // Reading userID and password from the file
adminLogin:
    printf("\n=====ADMIN PORTAL LOGIN=====\n\n");
    printf("Enter userID : "); // Requesting for userID from the user
    gets(username);
    printf("\nEnter PIN : "); // Requesting for the PIN from the user
    gets(pin);
    if ((strcmp(getUsername, username) == 0) && (strcmp(getPin, pin) == 0))
    {
        printf("Login succesful!!!");
        adminMainMenu();
    }
    else
    {                    // A user has maximum of 3 attempts to login.
        flag += 1;       // In case the user reaches maximum attempts,
        while (flag <= 3) // the loop breaks and user will have to run
        {                // the bot again.
            printf("Incorrect input. Please try again.\n\n");
            goto adminLogin;
        }
        printf("Maximum attempts reached. Please try again later.");
    }
    fclose(fptr);
}
