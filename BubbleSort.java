//Name:Kreisler R. Taligatos
//Section:BSIT 2-1
//Date: oct 4, 2022
//Description: Print the number of iteration in bubble and insertion after the unordered array is sorted.
import java.util.Scanner;
public class BubbleSort{

    public static void sort(int arr [] ){
        
        //sorting process
        int size = arr.length;
        System.out.print("\nSorting:\n");
        for (int intel=0;intel<size-1;++intel){

            for(int kreisler=0;kreisler<size-intel-1; ++kreisler){

                if(arr[kreisler+1]<arr[kreisler]){

                    int swap = arr[kreisler];
                    arr[kreisler] = arr[kreisler+1];
                    arr[kreisler+1] = swap;     
                }         
        for(int xoos = 0; xoos<size; ++xoos){
            System.out.print(arr[xoos] + " ");
        }
        System.out.println(" ");
            }
        }
    }
            //print the array  
            static void printArray(int arr[])
            {
                System.out.print("\nBubble Sorted array : ");
                int size = arr.length;
                for (int xin = 0; xin < size; xin++)
                    System.out.print(arr[xin] + " ");
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
                for(int storm = 0; storm< size; storm++){
                     System.out.print("Enter the array values [" + (storm+1) + "]: ");
                       arr[storm] = sn.nextInt();
                    }
                       System.out.print("\nElements of the array : ");
                    for(int storm = 0; storm < size; storm++)
                    
                        System.out.print(arr[storm] + " ");
                    
                        BubbleSort ob = new BubbleSort();
                        ob.sort(arr);
                  
                        printArray(arr);
                    }
            }


    


