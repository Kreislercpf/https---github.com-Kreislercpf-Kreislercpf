//Name: Kreisler R. Taligatos
//Section: BSIT 2-1
//Date: October 20, 2022
//Description implementation of stack and queue in java, must be a user input, also print the list of the elements in both stack and queue
import java.util.Stack;
import java.util.Scanner;

public class stacks {
    public static void main(String[] args) {
        Stack<String> stacksss = new Stack <> ();
//create a program that will show the stack
        int arr[] = new int [100]; 
        boolean check = stacksss.empty();
        Scanner sn = new Scanner(System.in);

        System.out.print("Enter the size of the array : ");
        int size = sn.nextInt();
       //add the elements in stack
        for(int stuk = 0; stuk < size; stuk++){
            System.out.print("Enter the array values [" + (stuk+1) + "]: ");
            arr[stuk] = sn.nextInt();
        }
       //checking of the elemets in stack
        System.out.print("is the stack empty?" + check);
        System.out.println();
        for (int k = 0; k < size; k++) {
            stacksss.push(arr[k] + " ");
        }

        System.out.println("Elements in stack" + stacksss);
        check = stacksss.empty();  
    }

    }

    
     

