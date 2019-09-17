#include <stdio.h>

int main(void)
{
  int height;

  do
  {
      printf("Enter height of pyramid (integer from 0-23):");
      scanf("%d", &height);
      fflush(stdin);
  }
  while (height < 0 || height > 23);

  for (int i = 0; i < height; i++)
    {
        for (int space = height - i; space > 1; space--)
        {
            printf(" ");
        }
        for (int hash = 0; hash < i + 1; hash++)
        {
            printf("#");
        }
        printf("  ");
	for (int hash = 0; hash < i + 1; hash++)
        {
            printf("#");
        }
        printf("\n");
    }
}
