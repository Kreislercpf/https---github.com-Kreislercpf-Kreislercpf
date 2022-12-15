//Name: Kreisler R. Taligatos
//Date: December 15,2022
//Course/year: BSIT 2-1
//Description: create a java program of binary tree traversal and must have an choice menu and accepts an input from the user.
import java.util.Stack;
import java.util.Scanner;

    class Node {
        // create a node
        int data;
        Node left, right;

        public Node(int item){
           data = item;
          left =  right = null;
        }
    }
class pt4{
    Node root;
    void inOrder() {
        if(root == null)
      return;
          //create stack
        Stack<Node> my_stack = new Stack<Node>();
        Node current = root;
        while(current != null || my_stack.size() > 0){
            while(current != null){
                //push left
                my_stack.push(current);
                current = current.left;
            }
            //pop right and print
            current = my_stack.pop();
            System.out.print(current.data + " ");

            current = current.right;
        }
    }
    void preOrder(){
        if(root == null)
        return;
        // create stack
        Stack<Node> my_stack = new Stack<Node>();
        Node current = root;
        while(current != null || my_stack.size() > 0){
            while(current != null){
                // print pre order
                System.out.print(current.data + " ");
               //pop and push left and right
                my_stack.push(current);
                current = current.left;
            }
            current = my_stack.pop();
            current = current.right;
    }
}
   void postorder(){

    if (root == null) {
        return;
    }
    // create an stack
        Stack<Node> stack = new Stack<>();
        stack.push(root);
        Stack<Integer> out = new Stack<>();
    // loop till stack is empty
            while (!stack.empty())
           {
        // pop and push
                Node current = stack.pop();
                out.push(current.data);
        // push the left and right
               if (current.left != null) {
               stack.push(current.left);
                 }
                     if (current.right != null) {
                     stack.push(current.right);
 }
    }
    // print postorder traversal
        while (!out.empty()) {
        System.out.print(out.pop() + " ");
    }
}

public static void main(String [] args){
    //void main
    int ch,ans=0;
    Scanner in = new Scanner(System.in);
    int arr[] = new int [100];  //name array: arr, size = 100
    Scanner sn = new Scanner(System.in);
  
 // do while 
 // create a meni for what binary tree traversals to perform
    do{
        System.out.println("\n << Binary Tree Traversals >>\n");
        System.out.print("[1} In-order traversal\n");
        System.out.print("[2} Pre-order traversal\n");
        System.out.print("[3} Post-order traversal\n");
        System.out.print("[4} Exit\n");
        System.out.print("Please Select One Option : ");
        ch = in.nextInt();
// use switch case
        switch(ch){
            case 1: {
                // make a user input variables * the program must ask the user to put the input that will be traverse
                System.out.print(" \nEnter a 5 number for In-order traversal\n");
                pt4 tree = new pt4();
                for(int x = 0; x < 5; x++){
                    System.out.print("Enter a number [" + (x+1) + "]: ");
                    arr[x] = sn.nextInt();
        
                tree.root = new Node(arr[x]);
                System.out.print("Enter a number [" + (x+2) + "]: ");
                arr[x] = sn.nextInt();
                tree.root.left = new Node(arr[x]);
                System.out.print("Enter a number [" + (x+3) + "]: ");
                arr[x] = sn.nextInt();
                tree.root.right = new Node(arr[x]);
                System.out.print("Enter a number [" + (x+4) + "]: ");
                arr[x] = sn.nextInt();
                
                tree.root.left.left = new Node(arr[x]);
                System.out.print("Enter a number [" + (x+5) + "]: ");
                arr[x] = sn.nextInt();
                tree.root.left.right = new Node(arr[x]);
                System.out.print("In-order traversal\n");
                tree.inOrder();
                break;
              
                }
                break;
    }  
            case 2: {
                System.out.print(" \n Enter a 5 number for Pre-order traversal\n");
               
                pt4 tree = new pt4();
                
                for(int x = 0; x < 5; x++){
                    System.out.print("Enter a number [" + (x+1) + "]: ");
                    arr[x] = sn.nextInt();
        
                tree.root = new Node(arr[x]);
                System.out.print("Enter a number [" + (x+2) + "]: ");
                arr[x] = sn.nextInt();
                tree.root.left = new Node(arr[x]);
                System.out.print("Enter a number [" + (x+3) + "]: ");
                arr[x] = sn.nextInt();
                tree.root.right = new Node(arr[x]);
                System.out.print("Enter a number [" + (x+4) + "]: ");
                arr[x] = sn.nextInt();
                
                tree.root.left.left = new Node(arr[x]);
                System.out.print("Enter a number [" + (x+5) + "]: ");
                arr[x] = sn.nextInt();
                tree.root.left.right = new Node(arr[x]);
                System.out.print("In-order traversal\n");
                tree.preOrder();
                break;
                }
               
                break;
            }
        case 3: {
            System.out.print("\nEnter a 5 number for Post-order traversal\n"); 
            pt4 tree = new pt4();
            
            for(int x = 0; x < 5; x++){
                System.out.print("Enter a number [" + (x+1) + "]: ");
                arr[x] = sn.nextInt();
    
            tree.root = new Node(arr[x]);
            System.out.print("Enter a number [" + (x+2) + "]: ");
            arr[x] = sn.nextInt();
            tree.root.left = new Node(arr[x]);
            System.out.print("Enter a number [" + (x+3) + "]: ");
            arr[x] = sn.nextInt();
            tree.root.right = new Node(arr[x]);
            System.out.print("Enter a number [" + (x+4) + "]: ");
            arr[x] = sn.nextInt();
            
            tree.root.left.left = new Node(arr[x]);
            System.out.print("Enter a number [" + (x+5) + "]: ");
            arr[x] = sn.nextInt();
            tree.root.left.right = new Node(arr[x]);
           
            System.out.print("Post-order traversal\n");
         
            tree.postorder();
            break;
            }
            break;
    }
    case 4: {
        // exit
        System.out.println("Thankyou!");
        System.exit(0);
    }
    default:{
        // wrong choice try again
        System.out.println("Wrong choice! please try again");
    }
System.out.println();
} 
}while(ans != 4);
}
}





