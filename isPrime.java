import java.util.Scanner;

public class isPrime{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int num=sc.nextInt();

        if(primeChecker(num))System.out.println("Yes its a prime number");
        else System.out.println("No its not a prime number ");
        
    }
    public static boolean primeChecker(int n){
        boolean counter=true;
        for(int i=2;i<n/2;i++){
            if(n%i==0){
                counter=false;
            } 
            
        }
        return counter;
    }
    
    //check 
}
