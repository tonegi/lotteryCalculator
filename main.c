#include <stdio.h>

int main(void) {

  char name1[50],name2[50],name3[50];
  double amount1, amount2, amount3, prize, fullDivision, dividedPrize1, dividedPrize2, dividedPrize3;
  
  printf("Enter the name of the 1st bettor: ");
    scanf(" %s",&name1);
  printf("Enter the amount by the 1st bettor: USD$");
    scanf("%lf",&amount1);
  
  printf("\nEnter the name of the 2nd bettor: ");
    scanf("%s",&name2);
  printf("Enter the amount by the 2nd bettor: USD$");
    scanf("%lf",&amount2);
  
  printf("\nEnter the name of the 3rd bettor: ");
    scanf("%s",&name3);
  printf("Enter the amount by the 3rd bettor: USD$");
    scanf("%lf",&amount3);
  
  printf("\n-----------------------------------\n\n");
  printf("Enter the total prize amount: USD$");
    scanf("%lf",&prize);
  
  fullDivision= prize/(amount1+amount2+amount3);
  dividedPrize1= fullDivision * amount1;
  dividedPrize2=fullDivision*amount2; 
  dividedPrize3=fullDivision*amount3;

  printf("\n-----------------------------------\n\n");
  printf("The amount earned by the 1st bettor is: USD$%.2f",dividedPrize1);
      printf("\nThe amount earned by the 2nd bettor is: USD$%.2f",dividedPrize2);
        printf("\nThe amount earned by the 3rd bettor is: USD$%.2f",dividedPrize3);
  return 0;
}
