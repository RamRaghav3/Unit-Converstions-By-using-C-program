//  unit conversion caluculator

/* kms to miles
inches to foot
cms to inches
pounds to kgs
inches to meters

*/
#include <stdio.h>
int main()
{

    float kms_to_miles = 0.621371;
    float inches_to_foot = 0.0833333;
    float cms_to_inches = 0.393701;
    float inches_to_meters = 0.0254;
    float pounds_to_kgs = 0.453592;

    float first_quantity, conversion;
    char choose;
    int select;
    char choice;
    printf("Welcome! to the Unit converstion store\npress the 'c' to continue\npress 'e' to exit : \n");
    scanf("%c", &choose);
    switch (choose)
    {
    case 'c':
        printf("enter the first quantity [kilometeres or inches or centimeters or pounds ]: ");
        scanf("%f", &first_quantity);
        // printf("enter the second quantity : ");
        // scanf("%f", &conversion);
        printf("Press 1. kms to inches : \nPress 2. inches to foot : \nPress 3. cms to inches \nPress 4. inches to meters\nPress 5. pounds to kgs\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("OK!\nyou have selected kms to miles So\n");
            conversion = first_quantity * kms_to_miles;
            printf("the value in kms is %f\nafter converted to miles  it is %f \n", first_quantity, conversion);
            break;
        case 2:
            printf("OK!\nyou have selected inches to foot So\n");
            conversion = first_quantity * inches_to_foot;
            printf("the value in inches  is %f\nafter converted to foot it is %f \n", first_quantity, conversion);
            break;
        case 3:
            printf("OK!\nyou have selected cms to inches So\n");
            conversion = first_quantity * cms_to_inches;
            printf("the value in cms is %f\nafter converted to inches it is %f \n", first_quantity, conversion);
            break;
        case 4:
            printf("OK!\nyou have selected inches to meters So\n");
            conversion = first_quantity * inches_to_meters;
            printf("the value in inches is %f\nafter converted to meters it is %f \n", first_quantity, conversion);
            break;
        case 5:
            printf("OK!\nyou have selected pounds to kgs So\n");
            conversion = first_quantity * pounds_to_kgs;
            printf("the value in pounds is %f\nafter converted to kgs it is %f \n", first_quantity, conversion);
            break;

        default:
            break;
        }

    case 'e':
        goto last;
        break;
    default:
        break;
    }
last:
    printf("ThankYou! Visit Again......\n");
    return 0;
}
