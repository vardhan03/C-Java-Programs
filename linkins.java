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
    public void append(int data){
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
        return ;
    }
    public void push(int data){
        Node n=new Node(data);
        n.next=head;
        head=n;
    }
    public void print(){
        Node a=head;
        while(a!=null){
            System.out.print(a.data+" ");
            a=a.next;
        }
    }
    public void ins(Node p,int data){
        if(p==null){
            System.out.println("prev node is null cant insert");
            return ;
        }
        Node n=new Node(data);
        n.next=p.next;
        p.next=n;
    }
    public static void main(String[] args){
        Main l=new Main();
        l.append(1);
        l.append(2);
        l.append(3);
        l.append(4);
        l.push(5);
        l.ins(l.head.next,7);
        l.print();
    }
}
