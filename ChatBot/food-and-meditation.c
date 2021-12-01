/* COVID 19 CHATBOT
 * NCU-UAG COLLABORATIVE C PROJECT
 * GROUP: 6
 * COPYRIGHT © GROUP 6
 */

#include <stdio.h>

// Defining the meditation function which replies
// to queries regarding food and meditation questions.
int main(void);
int meditation()
{
    int input;
    char boolean;

    // Array consisting of fruits
    char *str[] = {"Citrus fruits", "Red bell peppers", "Broccoli", "Garlic", "Ginger", "Spinach", "Yogurt", "Almonds", "Sunflower seeds", "Turmeric", "Green tea", "Papaya", "Kiwi"};

    // Defining the main page
    printf("\n=====Choose questions from Food and Meditation Category listed below=====\n\n");
cont:
    printf("\n");
    printf("1. What are the best food to improve immunity?\n2. Suggest any good medicine for High fever.\n3. Suggest any good medicine for Running Nose (Rhinorrhea).\n4. Suggest any good medicine for Migraine Headache.\n5. Suggest any good medicine for Body Pain.\n6. Suggest any good medicine for difficulty in breathing.\n7. Why do we need Monoclonal Antibody?\n8. Can I get coronavirus from food,food packaging or food containers and preparation area?\n9. To whom I should contact with Drug-Related questions?\n10. Nutrition guidelines for adults during the COVID-19 outbreak.\n11. If a worker in my food processing facility/farm has tested positive for COVID-19, Should I close the facility? If so, for how long?\n12. What are some ways to maintain a healthy diet during the COVID-19 pandemic?\n13. What treatments are available for COVID-19\n14. Can i make my own hand sanitiser?\n15. What do i do if i get a rash or other reaction to hand sanitiser?\n\n16. If you want to go back to main panel.\n\nEnter the number residing with your question : ");
    scanf("%d", &input);
    switch (input)
    {
    case 1:
        for (int i = 0; i < 13; i++) // Using for loop to print all the fruits in the array
        {
            printf("\n# %s", str[i]);
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
    case 11:
        printf("Ans. Food facilities need to follow protocols set by local and state health departments, which may vary depending on the amount of community spread of COVID-19 in a given area. These decisions will be based on public health risk of person-to-person transmission not based on food safety.");
        printf("\n\nAny more queries?(y/n) : ");
        scanf(" %c", &boolean);
        if (boolean == 'y')
        {
            goto cont;
        }
        break;
    case 12:
        printf("Ans. Every day, eat a combination of different foods including whole grains such as wheat, maize and rice, legumes like lentils and beans, fruit and vegetables and some foods from animal sources (e.g. meat, fish, eggs and milk).\nEat plenty of fruit and vegetables:\n\n● Eat fresh fruit and vegetables that are in season.\n● Eat a variety of fruit and vegetables.\n\nKeep salt intake to less than 5 g per day (approximately 1 teaspoon):\n\n● Use less salt during cooking and preparing food and use iodized salt.\n● Check the labels on food and choose products with lower sodium content.\n● Limit processed and prepackaged foods, which can be full of hidden sodium.\n● Remove the salt shaker from the table, and instead use fresh or dried herbs and spices for added flavour.");
        printf("\n\nAny more queries?(y/n) : ");
        scanf(" %c", &boolean);
        if (boolean == 'y')
        {
            goto cont;
        }
        break;
    case 13:
        printf("Ans. On October 22, 2020, the FDA approved the antiviral drug Veklury (remdesivir) for use in adults and pediatric patients (12 years of age and older and weighing at least 40 kg) for the treatment of COVID-19 requiring hospitalization.Veklury should only be administered in a hospital or in a healthcare setting capable of providing acute care comparable to inpatient hospital care.");
        printf("\n\nAny more queries?(y/n) : ");
        scanf(" %c", &boolean);
        if (boolean == 'y')
        {
            goto cont;
        }
        break;
    case 14:
        printf("Ans. The FDA does not recommend that consumers make their own hand sanitizer. If made incorrectly, hand sanitizer can be ineffective, and there have been reports of skin burns from homemade hand sanitizer. The agency lacks verifiable information on the methods being used to prepare hand sanitizer at home and whether they are safe for use on human skin.");
        printf("\n\nAny more queries?(y/n) : ");
        scanf(" %c", &boolean);
        if (boolean == 'y')
        {
            goto cont;
        }
        break;
    case 15:
        printf("Ans. Call your doctor if you experience a serious reaction to hand sanitizer. The FDA encourages consumers and health care professionals to report adverse events experienced with the use of hand sanitizers to the FDA’s MedWatch Adverse Event Reporting program.");
        printf("\n\nAny more queries?(y/n) : ");
        scanf(" %c", &boolean);
        if (boolean == 'y')
        {
            goto cont;
        }
        break;
    case 16:
        printf("Okay! Going back to main panel");
        main();
    default:
        printf("\n>> Choose number corresponding to the relevant question\n");
        goto cont;
    }
    return 0;
}
