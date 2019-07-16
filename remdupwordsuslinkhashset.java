import java.util.*;
import java.io.*;
public class main{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        String s=sc.nextLine();
        String[] w=s.split(" ");
        LinkedHashSet<String> l=new LinkedHashSet<String>();
        for(int i=0;i<w.length;i++){
            l.add(w[i]);
        }
        Iterator i=l.iterator();
        while(i.hasNext()){
            System.out.print(i.next()+" ");
        }
    }
}
