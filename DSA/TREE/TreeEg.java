import java.util.LinkedList;
import java.util.Queue;

class TreeNode {
    int val;
    TreeNode left;
    TreeNode right;

    public TreeNode() {}

    public TreeNode(int val) {
        this.val = val;
        left = null;
        right = null;
    }
}


class TreeEg {
    int i = -1;

    void main() {
        int[] arr = {1, 2, 0, 0, 3, 4, 0, 0, 5, 0, 0};
        TreeNode root = createTree(arr);
        System.out.println(i);
        levelOrder(root);
        System.out.println();
        inorderTraversal(root);

        return;
    }

    TreeNode createTree(int[] arr) {
        i++;
        if (arr[i] == 0) {
            return null;
        }
        TreeNode root = new TreeNode(arr[i]);
        root.left = createTree(arr);
        root.right = createTree(arr);

        return root;
    }

    static void inorderTraversal(TreeNode root) {
        if (root == null) {
            return;
        }
        inorderTraversal(root.left);
        System.out.print(root.val + " ");
        inorderTraversal(root.right);
    }

    void levelOrder(TreeNode root) {
        Queue<TreeNode> level = new LinkedList<>();
        level.add(root);
        TreeNode temp = new TreeNode();
        while (level.size() > 0) {
            temp = level.remove();
            System.out.print(temp.val + " ");
            if (temp.left != null) {
                level.add(temp.left);
            }
            if (temp.right != null) {
                level.add(temp.right);
            }
        }
    }
}
