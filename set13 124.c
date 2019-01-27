#include <stdio.h>

int main() {

  int n;
  scanf("%d",&n);
  for(int r=n;r>=1;r--)
  {
    for(int c=1;c<=r;c++)
    {
      printf("1 ");
    }
    printf("\n");

  }
  return 0;
}
