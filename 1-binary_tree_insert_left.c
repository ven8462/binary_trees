#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 * Return: a pointer to the created node
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_node;
	binary_tree_t *temp;

	if (parent == NULL)
	{
		return (NULL);
	}
	
	if (parent->left == NULL)
	{
		left_node = binary_tree_node(parent, value);
		parent->left = left_node;
	}
	else
	{
		left_node = malloc(sizeof(binary_tree_t));

		if (left_node == NULL)
		{
			return (NULL);
		}
		temp = parent->left;
		parent->left = left_node;
		left_node->n = value;
		left_node->left = temp;
		left_node->right = NULL;
		left_node->parent = parent;
		temp->parent = left_node;
	}
	return (left_node);
}
