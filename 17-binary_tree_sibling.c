#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to the node to find the sibling for
 *
 * Return: pointer to sibling, or NULL if none exists
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	/* if node or parent doesn't exist, no sibling */
	if (node == NULL || node->parent == NULL)
		return (NULL);

	/* if node is the left child, sibling is right */
	if (node->parent->left == node)
		return (node->parent->right);

	/* if node is the right child, sibling is left */
	return (node->parent->left);
}
