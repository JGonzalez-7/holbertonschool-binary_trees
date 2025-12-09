#include "binary_trees.h"

/**
 * height - measures the height of a binary tree
 * @tree: pointer to the node to measure the height
 *
 * Return: height of the tree, or 0 if tree is NULL
 */
static size_t height(const binary_tree_t *tree)
{
	size_t left_h, right_h;

	if (tree == NULL)
		return (0);

	left_h = height(tree->left);
	right_h = height(tree->right);

	return ((left_h > right_h ? left_h : right_h) + 1);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure
 *
 * Return: balance factor, or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return ((int)height(tree->left) - (int)height(tree->right));
}
