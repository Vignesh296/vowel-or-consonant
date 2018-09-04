#include<stdio.h>
int main()
{
char c;
int n1,n2;
printf("Enter a character");
scanf("%c",&c);
n1= (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
n2= (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
if(n1||n2)
printf("Vowel");
else
printf("Consonant");
return 0;
}
