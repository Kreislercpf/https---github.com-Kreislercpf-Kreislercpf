//Name: Kreisler R. Taligatos
//Activity OE4
//Description: creating postcar from gizah using nested for loops
//Date: October , 14 2021

#include <iostream>
#include <iomanip>
#include <stdio.h>
using namespace std;

int main()
{
   int r, i, j, s;

   cout << "Enter number of rows: ";
   cin >> r;

       

   for(i = 1; i <= r; ++i)
   {
   
      for (s = i; s < r; s++)
         cout << " ";
         cout << " ";
         cout << " ";

      {
      for(j = 1; j <= (2 * r - 1); j++)
         
          if(i == r || j == 1 || j == 2*i - 1)
           cout << "*";
           else
           cout  <<" ";
           printf("  ");
      for(j = 1; j <= (2 * r - 1); j++)
           if(i == r || j == 1 || j == 2*i - 1)
           cout  << "*";
           else
           cout  << " ";
           printf("  ");
      for(j = 1; j <= (2 * r - 1); j++)
           if(i == r || j == 1 || j == 2*i - 1)
           cout << "*";
           else
           cout << " ";
          
           
      } 
            cout << "\n";
            
    }


  
   return 0;
}


