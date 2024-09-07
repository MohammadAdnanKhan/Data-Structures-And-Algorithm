#include <stdio.h>

int main() {
    int money;
    
    printf("Asif!\n");
    printf("Enter the amount you have: ");
    scanf("%d", &money);
    
    if (money > 1800) {
        printf("Go to a fancy cafe and then go for shopping.\n");
    } else if (money > 1500) {
        printf("Go for shopping.\n");
    } else if (money > 800) {
        printf("Order food from a Chinese restaurant.\n");
    } else if (money > 200) {
        printf("Eat momos from the local vendor.\n");
    } else {
        printf("Stay at home and eat home-cooked food :(\n");
    }
    
    return 0;
}