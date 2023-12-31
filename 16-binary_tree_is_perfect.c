#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: returns 1 if true, 0 otherwise
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int i = 1;

	if (tree == NULL || binary_tree_balance(tree) !=  0)
		return (0);
	if (tree->left)
		i = i & binary_tree_is_perfect(tree->left);
	if (tree->right)
		i = i & binary_tree_is_perfect(tree->right);
	return (i);
}

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
