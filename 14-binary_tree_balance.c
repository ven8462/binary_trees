#include "binary_trees.h"

/**
 * binary_tree_height - measure the height of a binary tree
 * @tree: pointer to the root node
 * Return: height. 0 otherwise
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	left_height++;
	right_height++;

	if (left_height > right_height)
		return (left_height);
	else
		return (right_height);
}

/**
  * binary_tree_balance - calculates the balance factor of a binary tree
  * @tree: pointer to node
  * Return: balance factor. 0 otherwise
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
