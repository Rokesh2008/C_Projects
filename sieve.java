import java.util.*;
public class sieve {
    public static void main(String[] argc){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for(int i = 0; i<n; i++){
            int x = sc.nextInt();
            int isthere = 0;
            for(int j = 0; j<x; j++){
                int val = sc.nextInt();
                if(val == 67){
                    isthere = 1;
                }
            }
            if(isthere == 1){
                System.out.println("YES");
            }
            else{
                System.out.println("NO");
            }
        }
        sc.close();
    }
}
