#include <iostream>


using namespace std;

void reset();
   
int main()
{

    
    int i,k=0;
    int ch=0;
    char word[25], number[25];
    
    


  do {
       system("cls");
       cout << endl;
       cout << " [1] Reverse a string" << endl <<endl;
       cout << " [2] Reverse Unsigned Integer" << endl <<endl;
       cout << " [3] Exit" << endl <<endl;
       cout << " Select Funtion : ";
       cin >> ch;

      
       switch(ch)
       {
           case 1:
           {
                system("cls");
                cout << "\n<< Reverse a string >>" <<endl;
                cout << "Enter a Word   : ";
                cin >> word;
                for (i=0; word[i]!='\0';i++)  
               
                     k++;
                           
                cout << "Reverse word  : ";
               
                for (i=k-1;i>=0;i--)  
                            
                     cout << word[i];
               cout << endl;


                     break;
              
           }
           case 2:
           {
                system("cls");
                cout << "\n<< Reverse Unsigned Integer >>" <<endl;
                cout << "Enter a number   : ";
                cin >> number;
                for (i=0; number[i]!='\0';i++)  
                              
                     k++; 
                               
                cout << "Reverse number  : ";
                
                for (i=k-1;i>=0;i--)   
                          
                     cout << number[i];
                     cout << endl;
                 
                    break;
           }
           case 3:
           {
                 system("cls");
                 cout << "\n<< Exit >>" <<endl; 

                 return 0;
           }      
           
           default:
           {
           
                cout << "Exit" << endl;
           }
       } 
  }while (ch == 3 && ch != 3);

  void reset();

   
   {   char ans='0';

   cout<<" Do you want to select another funtion?[y] to back"<<endl;

    cin>>ans;

   if(ans=='y'||ans=='Y')

   {  main();

   exit(0);

   }

  
}

    
}
