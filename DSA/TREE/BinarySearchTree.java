
class Node {
    int val;
    Node left;
    Node right;

    Node(int v) {
        this.val = v;
        left = null;
        right = null;
    }
}


public class BinarySearchTree {
    void main() {
        int[] arr = {3, 2, 1, 4, 5, 6};
        Node root = createBST(arr);
        System.out.print(root.right.val);
    }

    Node createBST(int[] arr) {
        Node root = null;
        for (int v : arr) {
            root = this.insert(root, v);
        }
        return root;
    }

    Node insert(Node root, int v) {
        if (root == null) {
            Node newNode = new Node(v);
            return newNode;
        }
        if (root.val > v) {
            root.left = insert(root.left, v);
        } else {
            root.right = insert(root.right, v);
        }

        return root;
    }
}
