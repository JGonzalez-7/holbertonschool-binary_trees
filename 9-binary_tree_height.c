#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure
 *
 * Return: height of the tree, or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h, right_h;

	if (tree == NULL)
		return (0);

	/* If no children, height is 0 */
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	/* Recursively get heights of left and right subtrees */
	left_h = binary_tree_height(tree->left);
	right_h = binary_tree_height(tree->right);

	/* Return max height + 1 */
	if (left_h > right_h)
		return (left_h + 1);
	else
		return (right_h + 1);
}
