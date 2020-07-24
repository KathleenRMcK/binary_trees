#include "binary_trees.h"
/**
 * binary_tree_height_help - measures height of binary tree
 * @tree: tree to measure
 * Return: height of tree
 */
size_t binary_tree_height_help(const binary_tree_t *tree)
{
	size_t left_help = 0;
	size_t right_help = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			left_help = tree->left ? 1 + binary_tree_height_help(tree->left) : 1;
			right_help = tree->right ? 1 + binary_tree_height_help(tree->right) : 1;
		}
		return ((left_help > right_help) ? left_help : right_help);
	}
}

/**
 * binary_tree_balance - measures balance factor of binary tree
 * @tree: tree being measured
 * Return: tree height
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int right = 0, left = 0, sum = 0;

	if (tree)
	{
		left = ((int)binary_tree_height_help(tree->left));
		right = ((int)binary_tree_height_help(tree->right));
		sum = left - right;
	}
	return (sum);
}
