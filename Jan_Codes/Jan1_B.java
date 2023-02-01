
import java.util.Scanner;


class Jan1_B {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int arr[] = new int[n];
        for(int i=0; i<n; i++){
            arr[i] = scan.nextInt();
        }
        int max = arr[0], secMax = Integer.MIN_VALUE;
        for(int i: arr){
            if(i>max){
                secMax = max;
                max = i;
            }else if(i>secMax){
                secMax = i;
            }
        }
        System.out.println("Max Value: " + max + "\nSecond Max value: " + secMax);
    }
}
