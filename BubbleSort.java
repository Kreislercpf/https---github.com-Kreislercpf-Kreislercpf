//Name:Kreisler R. Taligatos
//Section:BSIT 2-1
//Date: oct 4, 2022
//Description: Print the number of iteration in bubble and insertion after the unordered array is sorted.
import java.util.Scanner;
public class BubbleSort{

			//Function Bubble sort
            void sort(int arr[])
            {
                int size  = arr.length;
        for (int i = 0; i < size  - 1; i++)
            for (int j = 0; j < size - i - 1; j++)
                if (arr[j] > arr[j + 1]) {
                    // Move elements of and arr[j]
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
          
            //utility function to print array of size 
            static void printArray(int arr[])
            {
                System.out.print("\nSorted array : ");
                int size = arr.length;
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
        
        
        BubbleSort ob = new BubbleSort();
        ob.sort(arr);
  
        printArray(arr);
    
        }
}


    


