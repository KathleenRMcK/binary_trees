#include "binary_trees.h"
/**
 * binary_tree_size - measures the size of binary tree
 * @tree: root node of tree to measure
 * Return: if NULL return 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size_help = 0;
	size_t right_help = 0;
	size_t left_help = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		left_help = binary_tree_size(tree->left);
		right_help = binary_tree_size(tree->right);
		size_help = right_help + left_help + 1;
	}
	return (size_help);
}
