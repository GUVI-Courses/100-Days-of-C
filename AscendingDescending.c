#include <stdio.h>

// Recursive function to check order
// flag: 0 = undecided, 1 = ascending, -1 = descendings
int checkOrder(int num, int flag) {
    // Base case: if number has only one digit left
    if (num < 10) {
        return flag; 
    }

    int last = num % 10;        // rightmost digit
    int secondLast = (num / 10) % 10; // digit just before last

    if (secondLast < last) {   // increasing pair
        if (flag == 0 || flag == 1)
            return checkOrder(num / 10, 1);
        else
            return 2;  // mixed (neither ascending nor descending)
    }
    else if (secondLast > last) { // decreasing pair
        if (flag == 0 || flag == -1)
            return checkOrder(num / 10, -1);
        else
            return 2;
    }
    else {
        // Equal digits break strict ascending/descending
        return 2;
    }
}

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num < 0) {
        num = -num; // handle negative numbers
    }

    int result = checkOrder(num, 0);

    if (result == 1)
        printf("Digits are in ascending order.\n");
    else if (result == -1)
        printf("Digits are in descending order.\n");
    else
        printf("Digits are neither ascending nor descending.\n");

    return 0;
}

