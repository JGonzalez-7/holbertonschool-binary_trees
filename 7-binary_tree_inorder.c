#include "binary_trees.h"

/**
 * binary_tree_inorder - traverses a binary tree using in-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 *
 * Description: In-order = left subtree → node → right subtree.
 * If either tree or func is NULL, the function does nothing.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	/* Check for NULL pointers */
	if (tree == NULL || func == NULL)
		return;

	/* Traverse left subtree */
	binary_tree_inorder(tree->left, func);

	/* Visit current node */
	func(tree->n);

	/* Traverse right subtree */
	binary_tree_inorder(tree->right, func);
}
