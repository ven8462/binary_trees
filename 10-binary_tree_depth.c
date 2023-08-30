#include "binary_trees.h"
/**
 * binary_tree_depth - measure the depth of a binary tree
 * @tree: pointer to the root node
 * Return: depth. 0 otherwise
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent)
	{
		tree = tree->parent;
		depth++;
	}
	return (depth);
}
