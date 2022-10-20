//Name: Kreisler R. Taligatos
//Section: BSIT 2-1
//Date: October 20, 2022
//Description implementation of stack and queue in java, must be a user input, also print the list of the elements in both stack and queue
import java.util.Queue;
import java.util.LinkedList;
import java.util.Scanner;

public class qwe {

  public static void main(String[] args) {
    //create a program that will show the queue
    Queue<Integer> q_list = new LinkedList<>();
    int arr[] = new int [100]; 
   
    Scanner sn = new Scanner(System.in);

    System.out.print("Enter the size of the array : ");
        int size = sn.nextInt();
         //adding elements in queue
        for(int qt = 0; qt < size; qt++){
            System.out.print("Enter the array values [" + (qt+1) + "]: ");
            arr[qt] = sn.nextInt();
        }
    // inserting element
   
    for (int wall = 0; wall < size; wall++) {
        q_list.offer(arr[wall] );
    System.out.println("Queue: " + q_list);
    System.out.println();
    }
    // removing/deleting of the element from the queue
    
    int remove = q_list.poll();

    System.out.println("Removed Element: " + remove);
    
    System.out.println("Queue after deletion: " + q_list);
    }
}
