#include <iostream>
#include <map>
#include <ostream>
#include <queue>
#include <vector>

// 树节点的结构定义
struct TreeNode {
  char val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(char x) : val(x), left(nullptr), right(nullptr) {}
};

// 前序遍历
void preorderTraversal(TreeNode *root) {
  if (root == nullptr) {
    return;
  }

  std::cout << root->val << " ";  // 访问根节点
  preorderTraversal(root->left);  // 前序遍历左子树
  preorderTraversal(root->right); // 前序遍历右子树
}

// 中序遍历
void inorderTraversal(TreeNode *root) {
  if (root == nullptr) {
    return;
  }

  inorderTraversal(root->left);  // 中序遍历左子树
  std::cout << root->val << " "; // 访问根节点
  inorderTraversal(root->right); // 中序遍历右子树
}

// 后序遍历
void postorderTraversal(TreeNode *root) {
  if (root == nullptr) {
    return;
  }

  postorderTraversal(root->left);  // 后序遍历左子树
  postorderTraversal(root->right); // 后序遍历右子树
  std::cout << root->val << " ";   // 访问根节点
}

/**
 * @brief 层次遍历
 *
 * @param root
 */
void levelTraversal(TreeNode *root) {
  std::queue<TreeNode *> q{};

  q.push(root);
  TreeNode *node;
  while (!q.empty()) {

    node = q.front();
    std::cout << node->val << " ";
    if (root->left != nullptr) {
      q.push(root->left);
    }
    if (root->right != nullptr) {
      q.push(root->right);
    }
  }
}

/**
 * @brief v1 是前驱遍历  v2中驱遍历
 * v1{'A', 'B', 'D', 'E', 'C', 'F', 'H', 'G'};
 * v2{'D', 'B', 'E',     'A',      'F', 'H', 'C', 'G'}
 * 进行这样的左右子树分配喽！
 * v2{'D', 'B', 'E'}   v1{ 'B', 'D','E'}
 * B是根节点  分成 D   E
 *left = D right = E
 */
// TreeNode *buildTreeHelp_pre(std::vector<char> &v1, int v1_s, int v1_e,
//                             std::vector<char> &v2, int v2_s, int v2_e,
//                             std::map<char, int> m) {

//   if (v1_s > v1_e || v2_s > v2_e) {
//     return nullptr;
//   }

//   char rootValue = v1[v1_s];

//   TreeNode *root = new TreeNode(rootValue);

//   int rootIndex = m[rootValue];

//   int leftTreeSize = rootIndex - v2_s;

//   // 递归构建左右子树
//   root->left = buildTreeHelp_pre(v1, v1_s + 1, v1_s + leftTreeSize, v2, v2_s,
//                                  rootIndex - 1, m);
//   root->right = buildTreeHelp_pre(v1, v1_s + leftTreeSize + 1, v1_e, v2,
//                                   rootIndex + 1, v2_e, m);

//   return root;
// }


/**
 * @brief v1 是后驱遍历  v2中驱遍历
 * v1{'D', 'E', 'B', 'H', 'F', 'G', 'C', 'A'};
 * v2{'D', 'B', 'E',     'A',      'F', 'H', 'C', 'G'}
 * 进行这样的左右子树分配喽！
 * v2{'D', 'B', 'E'}   v1{ 'B', 'D','E'}
 * B是根节点  分成 D   E
 *left = D right = E
 */
// TreeNode *buildTreeHelp_hide(std::vector<char> &v1, int v1_s, int v1_e,
//                              std::vector<char> &v2, int v2_s, int v2_e,
//                              std::map<char, int> m) {

//   if (v1_s > v1_e || v2_s > v2_e) {
//     return nullptr;
//   }

//   char rootValue = v1[v1_e];

//   TreeNode *root = new TreeNode(rootValue);

//   int rootIndex = m[rootValue];

//   int rightTreeSize = v2_e - rootIndex;

//   //   // 递归构建左右子树
//   root->left = buildTreeHelp_hide(v1, v1_s, v1_e - rightTreeSize - 1, v2,
//   v2_s,
//                                   rootIndex - 1, m);

//   root->right = buildTreeHelp_hide(v1, v1_e - rightTreeSize, v1_e - 1, v2,
//                                    rootIndex + 1, v2_e, m);

//   return root;
// }

/**
 * @brief
 *
 * @param v1 层次遍历_level
 * @param v2 中驱遍历
 * @return TreeNode*
 */
// TreeNode* buildTreeHelper(vector<int>& inorder, int inStart, int inEnd,
//                           vector<int>& levelorder, unordered_map<int, int>&
//                           levelMap) {
//     if (inStart > inEnd) {
//         return NULL;
//     }

//     // 根据层次遍历结果找到当前子树的根节点
//     int rootVal = levelorder[0];
//     levelorder.erase(levelorder.begin());  // 移除已经使用的根节点

//     // 创建当前子树的根节点
//     TreeNode* root = new TreeNode(rootVal);

//     // 在中序遍历结果中找到根节点的索引
//     int rootIndex = levelMap[rootVal];

//     // 递归构造左子树和右子树
//     root->left = buildTreeHelper(inorder, inStart, rootIndex - 1, levelorder,
//     levelMap); root->right = buildTreeHelper(inorder, rootIndex + 1, inEnd,
//     levelorder, levelMap);

//     return root;
// }

/**
 * @brief
 *
 * @param v1 前驱遍历 _pre  后驱遍历 _hide 层次遍历_level
 * @param v2 中驱遍历
 * @return TreeNode*
 */
TreeNode *buildTree(std::vector<char> &v1, std::vector<char> &v2) {

  std::map<char, int> m{};

  for (auto i = 0; i < v2.size(); i++) {
    m[v2[i]] = i;
  }

  // return buildTreeHelp_hide(v1, 0, v1.size() - 1, v2, 0, v2.size() - 1, m);
}

int main() {

  std::vector<char> v1{'A', 'B', 'D', 'E', 'C', 'F', 'H', 'G'}; //前驱

  std::vector<char> v2{'D', 'B', 'E', 'A', 'F', 'H', 'C', 'G'}; //中驱

  std::vector<char> v3{'D', 'E', 'B', 'H', 'F', 'G', 'C', 'A'}; //后驱

  TreeNode *root = buildTree(v3, v2);

  postorderTraversal(root);

  std::cout << std::endl;

  return 0;
}