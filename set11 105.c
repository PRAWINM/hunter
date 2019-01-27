#include <stdio.h>

int main() {

  int n,r,digit=0,sum=0;
  scanf("%d",&n);
  int copy_num=n;
  while(n>0)
  {
    r=n%10;
    digit++;
    n=n/10;
  }
  n=copy_num;
  while(n>0)
  {
    int pow=1;
    r=n%10;
    for(int i=1;i<=digit;i++)
    {
      pow=pow*r;
    }
    sum=sum+pow;
    n=n/10;
  }
  printf("%d",sum);
  return 0;
}
