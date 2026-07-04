
class Node {
    int data;
    Node next;

    Node() {
        next = null;
    }

    Node(int v) {
        this.data = v;
        next = null;
    }
}


class list {
    private Node head;
    private Node tail;

    list() {
        head = null;
        tail = null;
    }

    void push_front(int val) {
        Node newNode = new Node(val);
        newNode.next = head;
        head = newNode;
    }

    void traverse() {
        Node temp = head;
        while (temp != null) {
            System.out.print(temp.data + " ");
            temp = temp.next;
        }
        System.out.println();
    }

    void traverse(Node node) {
        while (node != null) {
            System.out.print(node.data + " ");
            node = node.next;
        }
        System.out.println();
    }

    Node middleByLen() {
        int n = 0;
        Node temp = head;
        while (temp != null) {
            temp = temp.next;
            n++;
        }
        n = n / 2;
        temp = head;
        int i = 0;
        while (i < n) {
            temp = temp.next;
            i++;
        }
        return temp;
    }

    Node middleNode() {
        Node slow = head;
        Node fast = head;

        while (fast != null && fast.next != null) {
            slow = slow.next;
            fast = fast.next.next;
        }

        return slow;
    }
}


public class middleLL {
    void main() {
        list l = new list();
        // l.push_front(4);
        l.push_front(3);
        l.push_front(2);
        l.push_front(1);
        l.traverse();
        Node middle = l.middleByLen();
        l.traverse(middle);
        middle = l.middleNode();
        l.traverse(middle);
    }
}
