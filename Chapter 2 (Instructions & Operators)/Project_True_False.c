// Print 1 (True) or 0 (False) for following statements:

#include <stdio.h>
int main () {

// a. If it's Sunday & it's snowing -> True

int isSunday = 1; // 1 for True, 0 for False
int isSnowing = 1; // 1 for True, 0 for False
int isSundaySnowing = (isSunday && isSnowing);
printf("%d\n", isSundaySnowing);

// b. If it's Monday Or it's raining -> True

int isMonday = 1; // 1 for True, 0 for False
int isRaining = 0; // 1 for True, 0 for False
int isMondayOrRaining = (isMonday || isRaining);
printf("%d\n", isMondayOrRaining);

return 0;
}

