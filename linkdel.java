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
    public void del(int key){
        Node temp=head,prev=null;
        if(temp!=null && temp.data==key){
            head=temp.next;
            return;
        }
        while(temp!=null && temp.data!=key){
            prev=temp;
            temp=temp.next;
        }
        if(temp==null){
            System.out.println("key not found");
            return;
        }
        prev.next=temp.next;
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
        m.print();
        m.del(4);
        m.print();
    }
}
