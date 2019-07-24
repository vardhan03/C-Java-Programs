import java.util.*;
class Main{
    Node head;
    static class Node{
        int data;
        Node next;
        Node(int d){
            data=d;
            next=null;
        }
    }
    public void push(int data){
        Node n=new Node(data);
        if(head==null){
            head=new Node(data);
            return;
        }
        n.next=null;
        Node last=head;
        while(last.next!=null){
            last=last.next;
        }
        last.next=n;
    }
    public boolean dloop(Node h){
        HashSet<Node> hs=new HashSet<Node>();
        while(h!=null){
            if(hs.contains(h))
            {
                return true;
            }
            hs.add(h);
            h=h.next;
        }
        return false;
    }
    public void print(){
        Node p=head;
        while(p!=null){
            System.out.print(p.data+" ");
            p=p.next;
        }
    }
    public static void main(String[] args){
        Main m=new Main();
        m.push(1);
        m.push(2);
        m.push(3);
        m.push(4);
        m.push(5);
        m.push(6);
        m.print();
        //m.head.next.next.next=m.head;
        if(m.dloop(m.head)){
            System.out.println("Loop found");
        }else{
            System.out.println("loop not found");
        }
    }
}
