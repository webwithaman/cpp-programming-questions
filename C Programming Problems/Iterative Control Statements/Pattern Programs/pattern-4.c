// C Program to Print Following Pattern

/*

   *****
    ****
     ***
      **
       *

*/


// Header files
#include <stdio.h>
#include <conio.h>


// Main Function Start
int main()
{

    int maxRows;
    printf("\nHow Many Rows => ");
    scanf("%d", &maxRows);

    // Handling Invalid Input
    if (maxRows < 0)
        maxRows = -maxRows;

    puts("\n----------------------------------------------------------------------\n");


    // 1st Approach
    for (int i = 1; i <= maxRows; i++)
    {
        for(int space = 1; space <= i-1;space++)
          printf(" ");

        for (int j = 1; j <= maxRows + 1 - i; j++)
            printf("*");

        printf("\n");
    }



    // 2nd Approach
    // for (int i = 1; i <= maxRows; i++)
    // {
    //     for (int j = 1; j <= maxRows; j++)
    //     {
    //         if (j >= i)
    //             printf("*");
    //         else
    //             printf(" ");
    //     }
    //     printf("\n");
    // }



    // 3rd Approach
    // for (int i = maxRows; i; i--)
    // {
    //     for(int space=maxRows-i;space;space--)
    //     printf(" ");

    //     for (int j = i; j; j--)
    //         printf("*");

    //     printf("\n");
    // }

    getch();
    return 0;
}
// Main Function End
