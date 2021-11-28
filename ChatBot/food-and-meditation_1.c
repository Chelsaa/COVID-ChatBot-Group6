/* COVID 19 CHATBOT
 * NCU-UAG COLLABORATIVE C PROJECT
 * GROUP: 6
 * COPYRIGHT © GROUP 6
 */

#include <stdio.h>

// Defining the meditation function which replies
// to queries regarding food and meditation questions.

int meditation()
{
    int input;
    char boolean;
    char *str[] = {"Citrus fruits", "Red bell peppers", "Broccoli", "Garlic","Ginger", "Spinach", "Yogurt", "Almonds", "Sunflower seeds", "Turmeric", "Green tea","Papaya", "Kiwi"};

    printf("\n=====Choose questions from Food and Meditation Category listed below=====\n\n");
cont:
    printf("\n");
    printf("1. What are the best food to improve immunity?\n2. Suggest any good medicine for High fever.\n3. Suggest any good medicine for Running Nose (Rhinorrhea).\n4. Suggest any good medicine for Migraine Headache.\n5. Suggest any good medicine for Body Pain.\n6. Suggest any good medicine for difficulty in breathing.\n7. Why do we need Monoclonal Antibody?\n8. Can I get coronavirus from food,food packaging or food containers and preparation area?\n9. To whom I should contact with Drug-Related questions?\n10. Nutrition guidelines for adults during the COVID-19 outbreak.\n\nEnter the number residing with your question : ");
    scanf("%d", &input);
    switch (input)
    {
    case 1:
        for (int i = 0; i < 13; i++)
        {
            printf("\n# %s",str[i]);
        }
        printf("\n\nAny more queries?(y/n) : ");
        scanf(" %c", &boolean);
        if (boolean == 'y')
        {
            goto cont;
        }
        break;
    case 2:
        printf("Ans. Medications such as Calpol, Crocin and Ibuprofen may help to ease discomfort.Avoid giving children Aspirin because this may cause a rare, serious condition.");
        printf("\n\nAny more queries?(y/n) : ");
        scanf(" %c", &boolean);
        if (boolean == 'y')
        {
            goto cont;
        }
        break;
    case 3:
        printf("Ans. When you have a cold, your body makes chemicals called histamines.That leads to sneezing, a runny nose, and watery eyes. Over-the-counter antihistamines such as chlorpheniramine and diphenhydramine block this process and can relieve those symptoms.Some popular medications are:\n# Chlorphenaramine\n# Ceterizine etc.");
        printf("\n\nAny more queries?(y/n) : ");
        scanf(" %c", &boolean);
        if (boolean == 'y')
        {
            goto cont;
        }
        break;
    case 4:
        printf("Ans. Migraine headaches are among the symptoms of a condition called migraine.Some medications can ease the pain and symptoms of a migraine headache. Some of them are:\n# Ibuprofen\n# Aspirin\n# Advil etc.");
        printf("\n\nAny more queries?(y/n) : ");
        scanf(" %c", &boolean);
        if (boolean == 'y')
        {
            goto cont;
        }
        break;
    case 5:
        printf("Ans. Popular medications:\n# Dolokind\n# Combiflam etc.\n\nThese tablet belongs to a group of medicines called nonsteroidal anti-inflammatory drugs (NSAIDs).It is used for short-term relief of pain, inflammation, and swelling in conditions that affect joints and muscles.It works by blocking chemical messengers in the brain that tell us we have pain.");
        printf("\n\nAny more queries?(y/n) : ");
        scanf(" %c", &boolean);
        if (boolean == 'y')
        {
            goto cont;
        }
        break;
    case 6:
        printf("Ans. Popular medications:\n# Etophylline Injections\n> Etophylline Injection is used to treat asthma and chronic obstructive pulmonary disorder (a lung disorder in which the flow of air to the lungs is blocked).\n> It helps in relaxing the muscles of the air passages and making it easier to breathe.\n\n# Salbutamol(Albuterol)\n> Salbutamol,also known as albuterol and sold under the brand name Ventolin among others, is a medication that opens up the medium and large airways in the lungs.\n> It is a short-acting ß2 adrenergic receptor agonist which works by causing relaxation of airway smooth muscle.");
        printf("\n\nAny more queries?(y/n) : ");
        scanf(" %c", &boolean);
        if (boolean == 'y')
        {
            goto cont;
        }
        break;
    case 7:
        printf("Ans. We need them as,\n# Monoclonal antibodies are laboratory-produced molecules that act as substitute antibodies that can restore,enhance or mimic the immune system's attack on cells.\n# Monoclonal antibodies for COVID-19 may block the virus that causes COVID-19 from attaching to human cells, making it more difficult for the virus to reproduce and cause harm.\n# Monoclonal antibodies may also neutralize a virus.");
        printf("\n\nAny more queries?(y/n) : ");
        scanf(" %c", &boolean);
        if (boolean == 'y')
        {
            goto cont;
        }
        break;
    case 8:
        printf("Ans. Yes, you can get coronavirus from surfaces.It is not certain how long the virus that causes COVID-19 survives on surfaces, but it seems likely to behave like other coronaviruses. A recent review of the survival of human coronaviruses on surfaces found large variability, ranging from 2 hours to 9 days (11). The survival time depends on a number of factors, including the type of surface, temperature, relative humidity and specific strain of the virus.");
        printf("\n\nAny more queries?(y/n) : ");
        scanf(" %c", &boolean);
        if (boolean == 'y')
        {
            goto cont;
        }
        break;
    case 9:
        printf("Ans. You can,\n# Call the FDA’s Division of Drug Information at (855) 543-3784\n# Email them at druginfo@fda.hhs.gov.");
        printf("\n\nAny more queries?(y/n) : ");
        scanf(" %c", &boolean);
        if (boolean == 'y')
        {
            goto cont;
        }
        break;
    case 10:
        printf("Ans. Proper nutrition and hydration are vital. People who eat a well-balanced diet tend to be healthier with stronger immune systems and lower risk of chronic illnesses and infectious diseases. So you should eat a variety of fresh and unprocessed foods every day to get the vitamins, minerals, dietary fibre, protein and antioxidants your body needs. Drink enough water. Avoid sugar, fat and salt to significantly lower your risk of overweight, obesity, heart disease, stroke, diabetes and certain types of cancer.\n# Eat fruits, vegetables, legumes (e.g. lentils, beans), nuts and whole grains.\n# Daily, eat: 2 cups of fruit (4 servings), 2.5 cups of vegetables (5 servings), 180 g of grains, and 160 g of meat and beans.\n# For snacks, choose raw vegetables and fresh fruit rather than foods that are high in sugar, fat or salt.\n# Do not overcook vegetables and fruit as this can lead to the loss of important vitamins.\n# When using canned or dried vegetables and fruit, choose varieties without added salt or sugar.\n# Drink enough water every day");
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