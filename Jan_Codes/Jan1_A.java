
import java.util.Scanner;

 class Jan1_A {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        for(int i=1; i<=n; i++){
            for(int j = 0; j<=n-i; j++){
                System.out.print(" ");
            }
            for(int j=0; j<i; j++){
                System.out.print("* ");
            }
            System.out.println();
        }
    }
}
