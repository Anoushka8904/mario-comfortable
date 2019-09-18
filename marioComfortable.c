#include <stdio.h>

int main(void)
{
  int height;

  do
  {
      printf("Enter height of pyramid (integer from 0-23):");
      scanf("%d", &height);
      fflush(stdin); //prevents infinite loop when string is entered
  }
  while (height < 0 || height > 23); //accepts int value from 0-23

  for (int i = 0; i < height; i++)
    {
        for (int space = height - i; space > 1; space--) //loop prints spaces to align pyramids with right edge of window
        {
            printf(" ");
        }
        for (int hash = 0; hash < i + 1; hash++) //loop prints hashes for 1st pyramid half
        {
            printf("#");
        }
        printf("  "); //double space between pyramid halves
	for (int hash = 0; hash < i + 1; hash++) //loop prints hashes for 2nd pyramid half
        {
            printf("#");
        }
        printf("\n");
    }
}
