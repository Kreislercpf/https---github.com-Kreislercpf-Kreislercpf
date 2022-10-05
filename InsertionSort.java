//Name:Kreisler R. Taligatos
//Section:BSIT 2-1
//Date: oct 4, 2022
//Description: Print the number of iteration in bubble and insertion after the unordered array is sorted.
import java.util.Scanner;
public class InsertionSort{

	
			//Function insertion sort
            void sort(int arr[])
            {
                int size  = arr.length;
                for (int x = 1; x < size; x++) {
                    int key = arr[x];
                    int j = x - 1;
          
                    //Move elements of arr[0..i-1]
                    while (j >= 0 && arr[j] > key) {
                        arr[j + 1] = arr[j];
                        j = j - 1;
                    }
                    arr[j + 1] = key;
                }
            }
          
            /* A utility function to print array of size n*/
            static void printArray(int arr[])
            {
                System.out.print("\nSorted array : ");
                int size  = arr.length;
                for (int x = 0; x < size; x++)
                    System.out.print(arr[x] + " ");
          
                System.out.println();
            }

    public static void main(String[] args){
    int arr[] = new int [5];  //name array: arr, size = 100
	Scanner sn = new Scanner(System.in);
    int size  = arr.length;
//add elements in the array
        for(int x = 0; x < size; x++){
            System.out.print("Enter the array values [" + (x+1) + "]: ");
           arr[x] = sn.nextInt();
        }
           System.out.print("\nElements of the array : ");
        for(int x = 0; x < size; x++)
        
            System.out.print(arr[x] + " ");
        
        
        InsertionSort ob = new InsertionSort();
        ob.sort(arr);
  
        printArray(arr);
    
        }
}


    


