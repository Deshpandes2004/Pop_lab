  #include<stdio.h>
  void calculate_bill(int units)
  {
      double bill;
      if(units <= 100)
      {
          bill = units*0.60;
      }
      else if(units <= 300)
      {
          bill = 100*0.60+(units-100)*0.80;

      }
      else
      {
          bill = 100*0.60+200*0.80+(units-300)*1.00;
      }
      bill+= bill*0.15;

      printf("Electric bill: %.2f\n",bill);

  }
  int main()
  {
      int units;
      printf("enter the number of units consume:");
      scanf("%d",&units);

      calculate_bill(units);

      return 0;
  }
