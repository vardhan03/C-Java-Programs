import java.util.regex.Pattern;
import java.util.regex.Matcher;
import java.io.*;
class Main{
        private static final ip="255.255.255.255";
        private static final String ipre="^(25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)\\."+"(25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)\\."+"(25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)\\."+"(25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)$";
        private static final Pattern ipat=Pattern.compile(ipre);
        public static boolean isvalid(String a){
            if(a==null){
                return false;
            }
            Matcher m=ipat.matcher(a);
            return m.matches();
        }
    public static void main(String[] args){
        if(isvalid(ip)){
            System.out.println("valid ipv4 address");
        }else{
            System.out.println("not valid ipv4 address");
        }
        
    }
}
