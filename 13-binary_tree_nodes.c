#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node
 * Return:  number of parents, 0 otherwise
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t parents = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
		parents++;

	parents += binary_tree_nodes(tree->left);
	parents += binary_tree_nodes(tree->right);

	return (parents);
}
