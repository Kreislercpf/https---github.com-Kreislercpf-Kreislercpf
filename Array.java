//Name: Kreisler R. Taligatos
//Date: October 19,2022
//Course/year: BSIT 2-1
//Description: an unsigned integer array that accepts input from the user.
import java.util.Scanner;

//create a program that will traverse the entire elements of the array
public class Array {

    //run debug
    public static void main(String[] args){

        int arr[] = new int [100];  //name array: arr, size = 100
        int temp; //int temp
     

        Scanner sn = new Scanner(System.in);

        System.out.print("Enter the size of the array : ");
        int size = sn.nextInt();
// insert operation - add elements in the array
        for(int x = 0; x < size; x++){
            System.out.print("Enter the array values [" + (x+1) + "]: ");
            arr[x] = sn.nextInt();
        }
// display operation - all elements of the array
        System.out.print("\nElements of the array : ");
        for(int x = 0; x < size; x++){
            System.out.print(arr[x] + " ");
            
           
        }
//display the ascending order of the array     
        for (int x = 0; x < size; x++) {
            for (int j = x + 1; j < size; j++) {
              if (arr[x] > arr[j]) {
                temp = arr[x];
                arr[x] = arr[j];
                arr[j] = temp;
              }
            }
          }
      
          //print the output		
          System.out.print("\nAscending Order: ");
          for (int x = 0; x < size; x++) {
            System.out.print(arr[x] + " ");
 //display the descending order of the array                  
    }
    for (int x = 0; x < size; x++) {
        for (int j = x + 1; j < size; j++) {
          if (arr[x] < arr[j]) {
            temp = arr[x];
            arr[x] = arr[j];
            arr[j] = temp;
          }
        }
      }
  
      //print the output 		
      System.out.print("\nDescending Order: ");
      for (int x = 0; x < size; x++) {
        System.out.print(arr[x] + " ");

        }
    }
}
    
    
