#include "binary_trees.h"

/**
 * binary_tree_preorder - traverses a binary tree using pre-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node's value
 *
 * Description: If tree or func is NULL, the function does nothing.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	/* do nothing if tree or function pointer is NULL */
	if (tree == NULL || func == NULL)
		return;

	/* visit the current node first */
	func(tree->n);

	/* recursively traverse the left subtree */
	binary_tree_preorder(tree->left, func);

	/* recursively traverse the right subtree */
	binary_tree_preorder(tree->right, func);
}
