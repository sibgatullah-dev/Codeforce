#include<stdio.h>
int main(){
  int n,sum = 0; scanf("%d",&n);
  char digit;

  for (int i = 0; i < n; i++)
  {
    scanf(" %c", &digit);//The space before %c ensures that scanf skips any leading whitespace (including the newline) and reads the next non-whitespace character.
    sum += digit - '0';
  }
  printf("%d",sum); 
    return 0;
}