#include "binary_trees.h"
/**
 * binary_tree_size - measure the size of a binary tree
 * @tree: pointer to the root node
 * Return: size. 0 otherwise
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_size = 0, right_size = 0;

	if (tree == NULL)
		return (0);

	left_size = binary_tree_size(tree->left);
	right_size = binary_tree_size(tree->right);

	return (left_size + right_size + 1);
}
