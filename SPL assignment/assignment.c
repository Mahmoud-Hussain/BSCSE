#include <stdio.h>
#define N 100000
void main()
{
   int n = 0, numOfVehicles[N] = {0}, p, highest = 0, sum = 0, check = 0;
   char c;

   do
   {
      printf("======= Dhaka Road Traffic Record System =========\n");
      printf("* Enter 'x', to take # of motor vehicles travel on a (one) road into \"numOfVehicles\" array of size N.\n");
      printf("* Enter 'y', to find and display the highest # of motor vehicles among all the roads\n");
      printf("* Enter 'z', to display the # of motor vehicles that are less than half the highest # of motor vehicles\n");
      printf("* Enter 'q', to quit/exit the menu system\n\n");

      printf("Enter your choice: ");
      scanf(" %c", &c);

      switch (c)
      {
      case 'x':
         printf("Enter the number of vehicles on road %d: ", n + 1);
         scanf("%d", &p);
         numOfVehicles[n] = p;
         printf("Number of vehicles on road %d : %d\n\n", n + 1, numOfVehicles[n]);
         n++;
         break;

      case 'z':
         for (int i = 0; i <= n; i++)
         {
            check += numOfVehicles[i];
         }
         if (check == 0)
            printf("No # of motor vehicles information is found. Please populate # of motor vehicles information first.\n\n");
         else
         {
            for (int i = 0; i <= n; i++)
            {
               if (numOfVehicles[i] >= highest)
               {
                  highest = numOfVehicles[i];
               }
            }
            for (int j = 0; j <= n; j++)
            {
               if (numOfVehicles[j] < highest / 2)
               {
                  sum += numOfVehicles[j];
               }
            }
            printf("# of motor vehicles that are less than half the highest # of motor vehicles = %d\n\n", sum);
         }
         break;

      case 'y':
         for (int i = 0; i <= n; i++)
         {
            check += numOfVehicles[i];
         }
         if (check == 0)
            printf("No # of motor vehicles information is found. Please populate # of motor vehicles information first.\n\n");
         else
         {
            for (int i = 0; i <= n; i++)
            {
               if (numOfVehicles[i] >= highest)
               {
                  highest = numOfVehicles[i];
               }
            }
            printf("The highest # of motor vehicles among all the roads = %d\n\n", highest);
         }
         break;

      case 'q':
         break;
      default:
         printf("Invalid Input.\n\n");
         break;
      }
   } while (c != 'q');
}
