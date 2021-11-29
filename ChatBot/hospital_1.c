/* COVID 19 CHATBOT
 * NCU-UAG COLLABORATIVE C PROJECT
 * GROUP: 6
 * COPYRIGHT © GROUP 6
*/

#include <stdio.h>
#include <stdlib.h>

int hospital_1()
{
    int input;
    char boolean;
 cont:   
    printf("\nChoose questions from Home Hospital listed below\n\n\n");

    printf("1. Which hospital has vacant beds within 10 km of the city?\n2. Is a negative covid test report required to visit the hospital for other OPD?\n3. Is it possible to visit people hospitalized for covid?\n4.\n5. What are the safety and hygiene measures in the hospital?\n6.\n7. Are hospitals vaccinating?\n8. how can i request a medical consultation?\n9. Does the hospital provide the medications?\n10. Is an appointment necessary to be seen?\n\nEnter the number residing with your question : ");
    scanf("%d", &input);
    switch (input)
    {
    case 1:
        printf("Ans. ");
        printf("\n\nAny more queries?(y/n) : ");
        scanf(" %c", &boolean);
        if (boolean == 'y')
        {
            goto cont;
        }
        break;
    case 2:
        printf("Ans. ");
        printf("\n\nAny more queries?(y/n) : ");
        scanf(" %c", &boolean);
        if (boolean == 'y')
        {
            goto cont;
        }
        break;
    case 3:
        printf("Ans. ");
        printf("\n\nAny more queries?(y/n) : ");
        scanf(" %c", &boolean);
        if (boolean == 'y')
        {
            goto cont;
        }
        break;
    case 4:
        printf("Ans. ");
        printf("\n\nAny more queries?(y/n) : ");
        scanf(" %c", &boolean);
        if (boolean == 'y')
        {
            goto cont;
        }
        break;
    case 5:
        printf("Ans. ");
        printf("\n\nAny more queries?(y/n) : ");
        scanf(" %c", &boolean);
        if (boolean == 'y')
        {
            goto cont;
        }
        break;
    case 6:
        printf("Ans. ");
        printf("\n\nAny more queries?(y/n) : ");
        scanf(" %c", &boolean);
        if (boolean == 'y')
        {
            goto cont;
        }
        break;
    case 7:
        printf("Ans. ");
        printf("\n\nAny more queries?(y/n) : ");
        scanf(" %c", &boolean);
        if (boolean == 'y')
        {
            goto cont;
        }
        break;
    case 8:
        printf("Ans. ");
        printf("\n\nAny more queries?(y/n) : ");
        scanf(" %c", &boolean);
        if (boolean == 'y')
        {
            goto cont;
        }
        break;
    case 9:
        printf("Ans. ");
        printf("\n\nAny more queries?(y/n) : ");
        scanf(" %c", &boolean);
        if (boolean == 'y')
        {
            goto cont;
        }
        break;
    case 10:
        printf("Ans. ");
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
