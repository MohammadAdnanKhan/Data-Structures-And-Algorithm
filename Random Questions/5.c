#include <stdio.h>
int main()
{
    char input;
    float KmsToMiles = 0.62137;
    float InchesToFoot = 0.083333;
    float CmsToInches = 0.39370;
    float PoundsToKgs = 0.453592;
    float InchesToMetres = 0.02543;
    float first, second;

    {
        printf("Enter the input character. q to Quit\n       1. KmsToMiles\n      2. InchesToFoot\n        3. CmsToInches\n      4. PoundsToKgs\n    5. InchesToMetres\n");
    }
    scanf("%c", &input);

    switch (input)
    {
    case 'q':
        printf("Quitting the program!!!");
        goto end;
        break;
    case '1':
        printf("Enter the quantity in terms of first unit\n");
        scanf("%f", &first);
        second = first * KmsToMiles;
        printf("%f Kms is equal to %f Miles \n", first, second);
        break;

    case '2':
        printf("Enter the quantity in terms of first unit\n");
        scanf("%f", &first);
        second = first * InchesToFoot;
        printf("%f Inches is equal to %f Foot \n", first, second);
        break;
    case '3':
        printf("Enter the quantity in terms of first unit\n");
        scanf("%f", &first);
        second = first * CmsToInches;
        printf("%f Cms is equal to %f Inches \n", first, second);
        break;
    case '4':
        printf("Enter the quantity in terms of first unit\n");
        scanf("%f", &first);
        second = first * PoundsToKgs;
        printf("%f Pounds is equal to %f Kgs \n", first, second);
        break;
    case '5':
        printf("Enter the quantity in terms of first unit\n");
        scanf("%f", &first);
        second = first * InchesToMetres;
        printf("%0.4f Inches is equal to %0.4f Metres \n", first, second);
        break;
    default:
        printf("in default now");
        break;
    }

end:
    return 0;
}
