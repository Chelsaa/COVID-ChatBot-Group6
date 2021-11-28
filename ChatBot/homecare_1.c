/* COVID 19 CHATBOT
 * NCU-UAG COLLABORATIVE C PROJECT
 * GROUP: 6
 * COPYRIGHT © GROUP 6
 */

#include <stdio.h>

int homecare_1()
{
    int input;
    char boolean;
    printf("\nChoose questions from Home Care Category listed below\n\n");
cont:
    printf("\n");
    printf("1. Till what minimum oxygen saturation level value can covid patients be treated at home?\n2. What are the emergency warning signs can be experienced for COVID Patients?\n3. Which preventions can help to prevent the spread of infection with the COVID-19 virus?\n4. When we can help up with ending isolation or quarantine of any person at home?\n5. Can we stay with COVID Patients at home?\n6. Advice for health workers providing care in a private home.\n7. When and how to clean surfaces and objects?\n8. Emergency Number to call, when having trouble in breathing?\n9. Precautionary measures for yourself while caring for someone with COVID-19.\n10. How we can cope with caregiving stress?\n\nEnter the number residing with your question : ");
    scanf("%d", &input);
    switch (input)
    {
    case 1:
        printf("Ans. Oxygen saturation of 92%% or 93%% should not be considered critical");
        printf("\n\nAny more queries?(y/n) : ");
        scanf(" %c", &boolean);
        if (boolean == 'y')
        {
            goto cont;
        }
        break;
    case 2:
        printf("Ans. These includes:\n\n# Trouble breathing\n# Persistent chest pain or pressure\n# New confusion\n# Bluish lips or face\n# Inability to stay awake\n# Pale, grey or blue-coloured skin, lips, or nail beds — depending on skin tone");
        printf("\n\nAny more queries?(y/n) : ");
        scanf(" %c", &boolean);
        if (boolean == 'y')
        {
            goto cont;
        }
        break;
    case 3:
        printf("Ans. Follow the following statements to prevent the spread of infection:\n\n# Stay home from work, school and public areas unless it's to get medical care.\n# Avoid using public transportation, ride-sharing services or taxis.\n# Stay isolated in one room, away from your family and other people, as much as possible.\n# Wear a face mask when near others.\n# Avoid sharing personal household items, such as dishes, towels, bedding and electronics.\n# Frequently wash your hands with soap and water for at least 20 seconds.");
        printf("\n\nAny more queries?(y/n) : ");
        scanf(" %c", &boolean);
        if (boolean == 'y')
        {
            goto cont;
        }
        break;
    case 4:
        printf("Ans. Isolation is used to separate people with the COVID-19 virus from those who aren't sick. Talk to the doctor about when to end home isolation if you have a weakened immune system.\n\n# At least 10 days have passed since your symptoms started\n# At least 24 hours have passed with no fever without the use of fever-reducing medicine\n# Other symptoms are improving — loss of taste and smell might last for weeks or months after recovery but shouldn't delay ending isolation");
        printf("\n\nAny more queries?(y/n) : ");
        scanf(" %c", &boolean);
        if (boolean == 'y')
        {
            goto cont;
        }
        break;
    case 5:
        printf("Ans. No, consult any doctor first for better measures to be kept in mind. if you’ve been caring for someone with COVID-19, you don’t need to stay home if:\n\n# You’ve been fully vaccinated and have no symptoms of COVID-19.\n# You’ve had COVID-19 within the last three months, recovered and remain without symptoms of COVID-19.");
        printf("\n\nAny more queries?(y/n) : ");
        scanf(" %c", &boolean);
        if (boolean == 'y')
        {
            goto cont;
        }
        break;
    case 6:
        printf("Ans. Health workers should take the following measures when providing care in the home:\n\n# Carry out a risk assessment to determine the appropriate PPE they need when caring for the patient.\n# Patient must be placed in adequately ventilated rooms with large quantities of fresh and clean outdoor air to control contaminants and odours.\n# Limit the number of household members present during any visits and request that they maintain a distance of at least 1 metre from the health worker.");
        printf("\n\nAny more queries?(y/n) : ");
        scanf(" %c", &boolean);
        if (boolean == 'y')
        {
            goto cont;
        }
        break;
    case 7:
        printf("Ans. Cleaning with a household cleaner that contains soap or detergent reduces the number of germs on surfaces and objects and decreases risk of infection from surfaces.\n\n# Clean high-touch surfaces and objects regularly (for example, daily or after each use) and after you have visitors in your home.\n# Focus on high-touch surfaces and objects (doorknobs, tables, handles, light switches, phones, remote controls, and countertops).\n# Clean other surfaces in your home when they are visibly dirty or as needed. Clean them more frequently if people in your household are more likely to get very sick from COVID-19.");
        printf("\n\nAny more queries?(y/n) : ");
        scanf(" %c", &boolean);
        if (boolean == 'y')
        {
            goto cont;
        }
        break;
    case 8:
        printf("Ans. Call 911 or your doctor and tell them your symptoms before going in. They will tell you what to do.");
        printf("\n\nAny more queries?(y/n) : ");
        scanf(" %c", &boolean);
        if (boolean == 'y')
        {
            goto cont;
        }
        break;
    case 9:
        printf("Ans. To protect yourself while caring for someone with COVID-19:\n\n# Keep your hands clean and away from your face.\n# Wear a face mask.\n# Clean your home frequently\n# Be careful with laundry.\n# Be careful with dishes.\n# Avoid direct contact with the sick person's bodily fluids.");
        printf("\n\nAny more queries?(y/n) : ");
        scanf(" %c", &boolean);
        if (boolean == 'y')
        {
            goto cont;
        }
        break;
    case 10:
        printf("Ans. As you take care of a loved one who is ill with COVID-19, you might feel stressed too. This can affect your ability to eat, sleep and concentrate, as well as worsen chronic health problems. It may also increase your use of alcohol, tobacco, or other drugs. To care for yourself, follow these steps:\n\n# Maintain a daily routine, including showering and getting dressed.\n# Take breaks from COVID-19 news, including social media.\n# Eat healthy meals and stay hydrated.\n# Exercise.\n# Get plenty of sleep.");
        printf("\n\nAny more queries?(y/n) : ");
        scanf(" %c", &boolean);
        if (boolean == 'y')
        {
            goto cont;
        }
        break;
    default:
        printf("\nChoose number corresponding to the relevant question\n");
        goto cont;
    }
    return 0;
}
