#include <stdio.h>

int main()
{
  int a1, a2, a3, total;
  printf("Enter the first angle:");
  scanf("%d", &a1);
  printf("Enter the second angle:");
  scanf("%d", &a2);
  a3 = 180 - a1 - a2;
  printf("Third angle: %d", a3);
  
  if (a1 == a2 && a2 == a3)
  {
      printf("Equilateral Triangle");
         } 
  else if (a1 == a2 || a1 ==  a3 || a2 == a3)
  {
      printf("Isosceles Triangle");
      }
  else 
  {
      printf("Scalene Triangle");
    }

    return 0;
}
