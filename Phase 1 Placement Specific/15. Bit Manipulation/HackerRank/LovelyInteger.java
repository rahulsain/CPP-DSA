import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution
{
    static int lonelyinteger(int[] ar,int n1)
    {
        int i,j,c,num;
        num=0;
        for(i=0;i<n1;i++)
        {
            c=0;
            for(j=0;j<n1;j++)
            {
                if(ar[i]==ar[j])
                    c++;
            }
            if(c==1)
            {
                num=ar[i];
                break;
            }
        }
        return(num);
    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        int n = scanner.nextInt();
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        int[] a = new int[n];

        String[] aItems = scanner.nextLine().split(" ");
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        for (int i = 0; i < n; i++) {
            int aItem = Integer.parseInt(aItems[i]);
            a[i] = aItem;
        }

        int result = lonelyinteger(a,n);

        bufferedWriter.write(String.valueOf(result));
        bufferedWriter.newLine();

        bufferedWriter.close();

        scanner.close();
    }
}
