//Name:Kreisler R. Taligatos
//Section:BSIT 2-1
//Date: oct 4, 2022
//Description: Print the number of iteration in bubble and insertion after the unordered array is sorted.
import java.util.Scanner;
public class InsertionSort{

			//Function of insertion sort
            public static void sort(int arr[])
            {
                int size = arr.length;
                         System.out.print("\nSorting:\n");
                for (int taligatos = 1; taligatos < size; ++taligatos) {
                    int key = arr[taligatos];
                    int c = taligatos - 1;
        
                    while (c >= 0 && arr[c] > key) {
                        arr[c + 1] = arr[c];
                        c = c - 1;
                    }
                    arr[c + 1] = key;
                                
                                for (int kreisler = 0; kreisler < size; ++kreisler){
                    System.out.print(arr[kreisler] + " ");}
                                //Print the sorting process
                                 System.out.println(" ");
                                     }              
            }
        
            //print array
            static void printArray(int arr[])
            {
                        System.out.print("\nInsertion Sorted Array: ");
                int size = arr.length;
                for (int chan = 0; chan < size; ++chan)
                    System.out.print(arr[chan] + " ");
        
                System.out.println();
            }
    public static void main(String[] args){
 
        int size;  //name array: arr, size = 100
	    Scanner sn = new Scanner(System.in);
      //add elements in the array
           System.out.print("Enter the size of the array : ");
           size = sn.nextInt();
//add elements in the array
         int arr[] = new int [size];
        for(int pogi = 0; pogi < size; pogi++){
         System.out.print("Enter the array values [" + (pogi+1) + "]: ");
           arr[pogi] = sn.nextInt();
        }
           System.out.print("\nElements of the array : ");
             for(int pogi = 0; pogi < size; pogi++)
        
              System.out.print(arr[pogi] + " ");
        
            InsertionSort ob = new InsertionSort();
            ob.sort(arr);
  
           printArray(arr);
        }
}


    


