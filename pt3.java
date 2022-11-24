//Name: Kreisler R. Taligatos
//Date: november 24,2022
//Course/year: BSIT 2-1
//Description: Implementation of hybrid quicksort

import java.util.Arrays;
import java.util.Random;
 
class pt3
{
    
    //number of elements to sort
    private static final int Num = 10000;
 
    // num of the sorting runs
    private static final int NUM = 500;
 
    // insertion sort
    public static void insertion(int[] Array, int Low, int kt)
    {
        //the proccess of insertion sort
        for (int c = Low + 1; c <= kt; c++)
        {
            int value = Array[c];
            int y = c;
 
        
            while (y > Low && Array[y - 1] > value)
            {
                Array[y] = Array[y - 1];
                y--;
            }
 //the sub array will shift to right position
 
            Array[y] = value;
        }
    }
 //Partitioning
    public static int Partition(int[] arr, int lo, int hi)
    {
        // the patition proccess
        int Pivot = arr[hi];
 //select the right pivot
        //  less the pivot will gonna be push to left 
        // more the pivot will gonna be push to right 
        // for equal it may go both 
        int Index = lo;
 
    
        for (int o = lo; o < hi; o++)
        {
            if (arr[o] <= Pivot)
            {
                int temp = arr[o];
                arr[o] = arr[Index];
                arr[Index] = temp;
 
                Index++;
            }
        }
 
        // swaping of pindex and pivot
        int temp = arr[hi];
        arr[hi] = arr[Index];
        arr[Index] = temp;
 
        // return 
        return Index;
    }
// quicksort 
    public static void Quick(int[] ar, int l, int h)
    {
        // the condition
        if (l >= h) {
            return;
        }
 //the quicksort proccess
        // arrange
        int piv = Partition(ar, l, h);
 
        // reccurr on the subrray 
        Quick(ar, l, piv - 1);
 
       
        Quick(ar, piv + 1, h);
    }
 // the optimized quicksort
    public static void optimized(int[] arr, int L, int H)
    {
        // conditions
        while (L < H)
        {
          //proccess of the optimized quicksort
            if (H - L < 10)
            {
                insertion(arr, L, H);
                break;
                //break
            }
            else {
                int piv = Partition(arr, L, H);
 
                // tail call 
                if (piv - L < H - piv)
                {
                    optimized(arr, L, piv - 1);
                    L = piv + 1;
                }
                else {
                    optimized(arr, piv + 1, H);
                    H = piv - 1;
                }
            }
        }
    }
    //main
    public static void main(String[] args)
    {
        int[] A = new int[Num];
 
        // measure the time
        long start, stop;
        long time1 = 0, time2 = 0;
 //conditions
        // perform the quicksort proccess
        for (int j = 0; j < NUM; j++)
        {
            // random input
            Arrays.fill(A, new Random().nextInt());
            int[] D = Arrays.copyOf(A, Num);
 
            // non-optimized Quicksort proccess
 
            start = System.nanoTime();
            Quick(A, 0, Num - 1);
            stop = System.nanoTime();
 
            // calculate the time of non optimized
            time1 += (stop - start);
 
            //  optimized Quicksort proccess
            start = System.nanoTime();
            optimized(D, 0, Num - 1);
            stop = System.nanoTime();
 
            // calculate the of the optimize
            time2 += (stop - start);
        }
 //end
 // print the ouput
        System.out.println("Average time taken of Non Optimized Quicksort: " +
                time1/NUM );
        System.out.println("Average time taken of Optimized Quicksort: " +
                time2/NUM );
    }
}

