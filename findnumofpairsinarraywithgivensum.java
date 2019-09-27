import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int[] a=new int[n];
        int k=sc.nextInt();
        for(int i=0;i<n;i++){
            a[i]=sc.nextInt();
        }
        HashSet<Integer> h=new HashSet<Integer>();
        for(int i=0;i<n;i++){
            int t=k-a[i];
            if(h.contains(t)){
                System.out.println("the pair is :"+t+" "+a[i]);
            }
            h.add(a[i]);
        }
    }
}
