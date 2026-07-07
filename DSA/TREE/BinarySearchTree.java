
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


class BinSearchTree {
    Node root;

    BinSearchTree() {
        root = null;
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

    BinSearchTree(int[] arr) {
        this.root = null;
        for (int v : arr) {
            this.root = this.insert(root, v);
        }
    }

    boolean exist = false;

    public boolean exists(Node temp, int val) {
        if (temp == null) {
            return false;
        }
        if (temp.val == val) {
            return true;
        } else if (temp.val > val) {
            exist = exists(temp.left, val);
        } else {
            exist = exists(temp.right, val);
        }

        return exist;
    }

    // gives sorted arrays as result always
    public void inorderTravesal(Node root) {
        if (root == null) {
            return;
        }
        inorderTravesal(root.left);
        System.out.print(root.val + " ");
        inorderTravesal(root.right);
    }
}


public class BinarySearchTree {
    void main() {
        int[] arr = {3, 2, 1, 4, 5, 6};
        BinSearchTree bst = new BinSearchTree(arr);
        bst.inorderTravesal(bst.root);
        System.out.println(bst.exists(bst.root, 4));
        System.out.println(bst.exists(bst.root, 0));
        System.out.println(bst.exists(bst.root, 1));
        System.out.println(bst.exists(bst.root, 6));

    }


}
