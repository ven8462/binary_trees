#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer to the node to insert the right-child
 * @value: value to store in the new node
 * Return: a pointer to the created node
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_node;
	binary_tree_t *temp;

	if (parent == NULL)
	{
		return (NULL);
	}

	if (parent->right == NULL)
	{
		right_node = binary_tree_node(parent, value);
		parent->right = right_node;
	}
	else
	{
		right_node = malloc(sizeof(binary_tree_t));

		if (right_node == NULL)
		{
			return (NULL);
		}
		temp = parent->right;
		parent->right = right_node;
		right_node->n = value;
		right_node->right = temp;
		right_node->left = NULL;
		right_node->parent = parent;
		temp->parent = right_node;
	}
	return (right_node);
}
