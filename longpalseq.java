import java.io.*;
import java.util.*;
public class main{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        String s=sc.nextLine();
        int n=s.length();
        int slen,i,j;
        int[][] res=new int[n][n];
        for(i=0;i<n;i++){
            res[i][i]=1;
        }
        for(slen=2;slen<=n;slen++){
            for(i=0;i<n-slen+1;i++){
                j=(i-1)+slen;
                if(s.charAt(i)==s.charAt(j) && slen==2){
                    res[i][j]=2;
                }else if(s.charAt(i)==s.charAt(j)){
                    res[i][j]=res[i+1][j-1]+2;
                }else{
                    res[i][j]=Math.max(res[i][j-1],res[i+1][j]);
                }
            }
        }
        System.out.println(res[0][n-1]);
    }
}
