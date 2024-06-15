import java.util.Random;
import java.util.Scanner;

public class a {

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in); 
        System.out.println("Enter the size of the array"); 
        int size = s.nextInt(); 
        int arr[] = new int[size];

        System.out.println("Enter the array elements: ");
        for(int i=0; i<size; i++)
            arr[i] = s.nextInt();
        
        System.out.println("array display:");
        for(int i=0; i<size; i++)
            System.out.print(arr[i]+" ");
        
    }
}