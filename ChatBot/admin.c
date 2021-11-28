/* COVID 19 CHATBOT
 * NCU-UAG COLLABORATIVE C PROJECT
 * GROUP: 6
 * COPYRIGHT © GROUP 6
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void adminRegistration(){
    
    char username[8], getUsername[8], getPin[5], boolean; int pin;
    FILE *fptr;

    fptr = fopen("loginData.txt", "a+");

    if (fptr == NULL){
        printf("Error");
    }
    else{
    adminRegister:
        printf("Enter the userid: ");
        scanf("%s", username);

        printf("Enter the password: ");
        scanf("%d", &pin);

        fscanf(fptr, "%s %s", getUsername, getPin);

        if ((strcmp(username, getUsername) == 0 && (strcmp(pin, getPin)) == 0)){
            printf("Username already taken. Please try again.");
            goto adminRegister;
        }

        else{
            fprintf(fptr, "%s %d\n", username, pin);
            printf("New admin registered succesfully!!! Do you want to add another admin? (y/n): ");
            scanf("%c", &boolean);
            if (boolean == 'y'){
                goto adminRegister;
            }
        }
    }   
    fclose(fptr);
}

void adminLogin(){
    char username[8], getUname[8], getPin[8], pin[8];
    FILE *fptr;

    fptr = fopen("loginData.txt", "r");
    fscanf(fptr, "%s %s", getUname, getPin);

    printf("Enter username: ");
    scanf("%s", username);

    printf("Enter password: ");
    scanf("%s", pin);

    if ((strcmp(username, getUname) == 0 && (strcmp(pin, getPin)) == 0)){
        printf("Login succesful!!!");
    }
    else{
        printf("Incorrect\n");
    }
}

int main(){
    adminRegistration();
    return 0;
}