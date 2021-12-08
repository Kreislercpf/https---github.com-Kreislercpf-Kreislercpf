#include <cstring>
#include <iostream>


using namespace std;

int main(){
    float foot, meter, kmeter, inches;
    int ch, ans = 0;
    char my_password[10] = "kreisler";
    char password[10];
    char my_username[10] = "taligatos";
    char username[10];
    


    cout << "Enter username:";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;
    if(!(strcmp(my_password,password))){
    
        cout << "\nCorrect password"  << endl;
        cout << "Welcome to my Conversion app" << endl;
        
        
        
   
  

    do{
         system("cls");
       cout << endl;
       cout << "\nCorrect password"  << endl;
       cout << "Welcome to my Conversion app" << endl;
       cout << "\n----------------------------------------" << endl;
       cout << "Length Conversion App" <<endl <<endl;
       cout << " [1] meter to kilometer" << endl;
       cout << " [2] kilometer to meter" << endl;
       cout << " [3] Inches to foot" << endl;
       cout << " [4] foot to inches" << endl;
       cout << " [0] Exit the Conversion App" << endl;
       cout << " Select Conversion : ";
       cin >> ch;

       switch (ch){
           case 1: {
               cout << "\n<< Convert meter to kilometer >>" << endl;
               std::cout << "Please enter meter:";
	           std::cin >> meter;
	           float kmeter = meter / 1000;
	           std::cout << "= " << kmeter << " km" << endl;

               break;
           }
           case 2: {
               cout << "\n<< Convert kilometer to meter >>" << endl;
               std::cout << "Please enter kilometer:";
	           std::cin >> kmeter;
	           float meter = kmeter * 1000;
	           std::cout << "= " << meter << " km" << endl;

               break;
           }
           case 3: {
               cout << "\n<< inches to foot >>" << endl;
               std::cout << "Please enter inches:";
	           std::cin >> inches;
	           float foot = inches / 12;
	           std::cout << "= " << foot << " ft" << endl;
              
               break;
           }
           case 4: {
               cout << "\n<< inches to foot >>" << endl;
               std::cout << "Please enter foot:";
	           std::cin >> foot;
	           float inches = foot * 12;
	           std::cout << "= " << inches << " inch" << endl;
              
               break;
           }
            case 0:{
            
                cout << "Conversion App Exit \nThank you for using the app!";
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
    
}else{
        cout << "\nInCorrect password"  << endl;
}


  
    return 0;
}

