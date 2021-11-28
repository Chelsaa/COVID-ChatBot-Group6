#include<stdio.h>
int main(){
	int n;
	printf("enter the serial number to get the answer for the respective question");
	printf("\n");
	printf("1.what to do firstly if the person is having covid-19 symptoms or is tested positive for it?\n");
	printf("2.What are the things that the patient should avoid doing?\n");
	printf("3.What should the patient do to avoid covid-19 to spread in the house?\n");
	printf("4.What are the hand washing routines for the patient?\n");
	printf("5.What kind of masks and gloves should the patient use?\n");
	printf("6.What if the patient is unable to breathe properly after wearing mask?\n");
	printf("7.What to do if the patient has sore throat?\n");
	printf("8.What to do if the patient is facing difficulty in breathing?\n");
	printf("9.What are the home remedies for cough?\n");
	printf("10.What are the other things the patient should do to enable proper breathing?\n");
	printf("\n");
	printf("Enter a number");
	scanf("%d", &n);

	switch(n){
		case 1: printf("Place the patient in a well-ventilated single room and limit the movement of patient in the house.");
		break;
		case 2: printf("The patient should avoid touching eyes,nose and mouth with unwashed hands.");
		break;
		case 3: printf("The patient should always wear a face mask and avoid contact with the caregivers.");
		break;
		case 4: printf("The patient should wash his/her hands regularly with soap and water and it is preferable to use disposable paper towels to dry hands.");
		break;
		case 5: printf("The patient should use disposable masks and gloves and should not reuse them.");
		break;
		case 6: printf("In such case, the other members in house should always wear masks and gloves and maintain a distance of minimum 1 metre from the patient.");
		break;
		case 7: printf("The patient should drink hot water and gargle with warm salt water regularly.");
		break;
		case 8: printf("The patient should be given proper medicines(antibiotics,paracetamol,etc.). The patient should try to keep his/her back straight for a relief in breathing.");
		break;
		case 9: printf("The patient should be given cough syrups and he/she should try to eliminate phlegm after coughing, this will give relief in cough.");
		break;
		case 10: printf("Steam inhalation is used to soothe and open the nasal passages and gives relief in breathing.");
		break;
	}
}