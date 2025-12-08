#include "binary_trees.h"

/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: pointer to the root of the tree to delete
 *
 * Description: Frees all nodes using post-order traversal.
 * If tree is NULL, nothing happens.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_delete(tree->left);  /* free left subtree */
	binary_tree_delete(tree->right); /* free right subtree */
	free(tree);                      /* free current node */
}
