/* COVID 19 CHATBOT
 * NCU-UAG COLLABORATIVE C PROJECT
 * GROUP: 6
 * COPYRIGHT © GROUP 6
 */

#include <stdio.h>

int main(void);
int hospital_1()
{
    int input;
    char boolean;
cont:
    printf("\nChoose questions from Home Hospital listed below\n\n\n");
    printf("1. Which hospital has vacant beds within 10 km of the city?\n2. Is a negative covid test report required to visit the hospital for other OPD?\n3. Is it possible to visit people hospitalized for covid?\n4. What is the schedule for attention at the hospitals?\n5. What are the safety and hygiene measures in the hospital?\n6. Do the hospitals have post-covid treatment?\n7. Are hospitals vaccinating?\n8. How can i request a medical consultation?\n9. Does the hospital provide the medications?\n10. Is an appointment necessary to be seen?\n\n16. If you want to go back to main panel.\n\nEnter the number residing with your question : ");
    scanf("%d", &input);
    switch (input)
    {
    case 1:
        printf("Ans. The lists includes the following: \n- Indraprastha Apollo Hospitals, New Delhi.\n- Delhi Hospital and Nursing Home\n- Delhi Hospital");
        printf("\n\nAny more queries?(y/n) : ");
        scanf(" %c", &boolean);
        if (boolean == 'y')
        {
            goto cont;
        }
        break;
    case 2:
        printf("Ans. No, if it's neccessary the hospital will do the test");
        printf("\n\nAny more queries?(y/n) : ");
        scanf(" %c", &boolean);
        if (boolean == 'y')
        {
            goto cont;
        }
        break;
    case 3:
        printf("Ans. No, we don't want the virus to spread any more");
        printf("\n\nAny more queries?(y/n) : ");
        scanf(" %c", &boolean);
        if (boolean == 'y')
        {
            goto cont;
        }
        break;
    case 4:
        printf("Ans. 24/7 ");
        printf("\n\nAny more queries?(y/n) : ");
        scanf(" %c", &boolean);
        if (boolean == 'y')
        {
            goto cont;
        }
        break;
    case 5:
        printf("Ans. Hospitals comply with all guidelines established by the government");
        printf("\n\nAny more queries?(y/n) : ");
        scanf(" %c", &boolean);
        if (boolean == 'y')
        {
            goto cont;
        }
        break;
    case 6:
        printf("Ans. No, just pattients with covid 19 ");
        printf("\n\nAny more queries?(y/n) : ");
        scanf(" %c", &boolean);
        if (boolean == 'y')
        {
            goto cont;
        }
        break;
    case 7:
        printf("Ans. Yes, some hospitals are vaccinating during normal business hours");
        printf("\n\nAny more queries?(y/n) : ");
        scanf(" %c", &boolean);
        if (boolean == 'y')
        {
            goto cont;
        }
        break;
    case 8:
        printf("Ans. They can be done by phone or through the website");
        printf("\n\nAny more queries?(y/n) : ");
        scanf(" %c", &boolean);
        if (boolean == 'y')
        {
            goto cont;
        }
        break;
    case 9:
        printf("Ans. Yes, they provide medications, but they are limited");
        printf("\n\nAny more queries?(y/n) : ");
        scanf(" %c", &boolean);
        if (boolean == 'y')
        {
            goto cont;
        }
        break;
    case 10:
        printf("Ans. Yes, for specialty consultations it is necessary to schedule an appointment, however it is not necessary in the emergency room");
        printf("\n\nAny more queries?(y/n) : ");
        scanf(" %c", &boolean);
        if (boolean == 'y')
        {
            goto cont;
        }
        break;
    default:
        printf("\n>> Choose number corresponding to the relevant question\n");
        goto cont;
    }
    return 0;
}
