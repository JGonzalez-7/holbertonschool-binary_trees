#include "binary_trees.h"

/**
 * binary_tree_height - measures height of a binary tree
 * @tree: pointer to root node
 *
 * Return: height, or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);

	left = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	right = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	return (left > right ? left : right);
}

/**
 * binary_tree_size - measures size (total nodes) of a tree
 * @tree: pointer to root node
 *
 * Return: number of nodes, or 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + binary_tree_size(tree->left) +
			binary_tree_size(tree->right));
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree
 *
 * Return: 1 if perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height, expected_nodes, actual_nodes;

	if (tree == NULL)
		return (0);

	height = binary_tree_height(tree);

	/* perfect tree has exactly 2^(h+1) - 1 nodes */
	expected_nodes = (1 << (height + 1)) - 1;

	actual_nodes = binary_tree_size(tree);

	return (expected_nodes == actual_nodes);
}
