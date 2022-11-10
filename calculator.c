#include<stdio.h>

int add(int num1, int num2)
{
    int totalAdd = num1 + num2;
    return totalAdd;
}
int sub(int num1, int num2)
{
    int totalSub = num1 - num2;
    return totalSub;
}

float multi(float num1, float num2)
{
    float totalMulti = num1 * num2;
    return totalMulti;
}

float div(float num1, float num2)
{
    float totalDiv = num1/num2;
    return totalDiv;
}

int mod(int num1, int num2)
{ 
    int totalMod = num1%num2;
    return totalMod;
}

int main()
{   
    int choose;

    do
    {
      printf("1. Add\n");
      printf("2. Subtraction\n");
      printf("3. Multiply\n");
      printf("4. Divide\n");
      printf("5. Modulos\n");
      printf("6. Exit\n\n");
      
      printf("Choose Operator: ");
      scanf("%d", &choose);
       
      if(choose == 1)
      { 
        int num1 = 10, num2 = 5;
        int total_add = add(num1, num2);
        printf("\nSum of 2 numbers %d and %d", num1, num2);
        printf("\nTotal Add: %d\n\n",total_add);
      }
      else if(choose == 2)
      {
        int num1 = 10, num2 = 3;
        int total_sub = sub(num1, num2);
        printf("\nDifference of 2 numbers %d and %d", num1, num2);
        printf("\nTotal Sub: %d\n\n",total_sub);
      }
      else if(choose == 3)
      {
        float num1 = 10.5, num2 = 5.1;
        float total_multi = multi(num1, num2);
        printf("\nProduct of 2 numbers %.2f and %.2f", num1, num2);
        printf("\nTotal Multiply: %.2f\n\n",total_multi);
      }
      else if(choose == 4)
      {
        float num1 = 34, num2 = 3;
        float total_div = div(num1, num2);
        printf("\nQuotient of 2 numbers %.2f and %.2f", num1, num2);
        printf("\nTotal Div: %.2f\n\n",total_div);
      }
      else if(choose == 5)
      {
        int num1 = 20, num2 = 7;
        int total_mod = mod(num1, num2);
        printf("\nMod of 2 numbers %d and %d", num1, num2);
        printf("\nTotal Mod: %d\n\n",total_mod);
      }
      else if(choose == 6)
      {
        printf("\nExit.");
        exit(0);
      }
      else
      { 
        printf("Invalid Input.\n\n");
        
      }
    
    }
    while(choose <= 6 );
      printf("Exit...");

   
    return 0;
}
