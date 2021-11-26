//Name: Kreisler R. Taligatos
//Activity Name: 
//Description: 
//Date: November 25, 2021
#include <iostream>

using namespace std;
#define MAX 100

const int _SIZE = 100;
int main() 
{
   

    int ch, size; 
    int score[_SIZE];
    int arr[MAX];
	int n,i,j;
	int temp, ans, num;

    do{
         system("cls");
       cout << endl;
       cout << "Select Menu:" <<endl <<endl;
       cout << " [1] Searching Array" << endl;
       cout << " [2] Sorting Array (ascending)" << endl;
       cout << " [3] Sorting Array (descending)" << endl;
       cout << " [0] Exit the Program" << endl;
       cout << " Enter your choice: ";
       cin >> ch;

       switch (ch){
           case 1: {
               cout << "\n<< Searching Array >>" << endl;
               cout << "Enter size of array : ";
               cin >> size; 

               for(int x = 0; x < size; x++){
                   cout << "Enter the array element [" << x << "]: ";
                   cin >> score[x];
               }

               for (int y = 0; y < size; y++){
                   cout << "Array elements [" << y << "]" << score[y] <<endl;
               }
               break;
           }
           case 2: {
               cout << "\n<< Searching Array >>" << endl;
               cout<<"Enter total number of elements to read: ";
	           cin>>n;
               if(n<0 || n>MAX)
	           {
		              cout<<"Input valid range!!!"<<endl;
		              return -1;
	           }
               for(i=0;i<n;i++)
               {
                   cout<<"Enter element ["<<i+1<<"] ";
		           cin>>arr[i];
               }
               for(i=0;i<n;i++)
	           {		
		            for(j=i+1;j<n;j++)
		            {
			              if(arr[i]>arr[j])
			              {
				                 temp  =arr[i];
				                 arr[i]=arr[j];
				                 arr[j]=temp;
			}
		}
	}
	            cout<<"Sorted Ascending Order Array elements:"<<endl;
	            for(i=0;i<n;i++)
		            cout<<arr[i]<<"\t";
	            cout<<endl;	
	

               break;
           }
           case 3: {
               cout << "\n<< Searching Array >>" << endl;
               cout<<"Enter total number of elements to read: ";
	           cin>>n;
               if(n<0 || n>MAX)
	           {
		              cout<<"Input valid range!!!"<<endl;
		              return -1;
	           }
               for(i=0;i<n;i++)
               {
                   cout<<"Enter element ["<<i+1<<"] ";
		           cin>>arr[i];
               }
               for(i=0;i<n;i++)
	           {		
		            for(j=i+1;j<n;j++)
		            {
			              if(arr[i] < arr[j])
			              {
				                 temp  =arr[i];
				                 arr[i]=arr[j];
				                 arr[j]=temp;
			}
		}
	}
	            cout<<"Sorted Descending Order Array elements:"<<endl;
	            for (i = 0; i < n; ++i)
                   cout<<arr[i]<<"\t";
                cout<<endl;
	

               break;
            
           }
            case 0:{
            
                cout << "App Exit \nThank you for using the app!";
                return 0;
            }
            default :{
                cout << "Invalid Input!";
            }
       }
    }while(ans == 4);

 void reset();

   
   {   char ans='0';

   cout<<"Do you want to select another conversion?[y] to continue"<<endl;

    cin>>ans;

   if(ans=='y'||ans=='Y')

   {  main();

   exit(0);

   }

  
}

    
}