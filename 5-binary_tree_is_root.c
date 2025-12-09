#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a node is the root of a binary tree
 * @node: pointer to the node to check
 *
 * Return: 1 if the node is a root, otherwise 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	/* If node is NULL, it cannot be the root */
	if (node == NULL)
		return (0);

	/* A node is root if its parent is NULL */
	if (node->parent == NULL)
		return (1);

	/* Otherwise, it is not the root */
	return (0);
}
