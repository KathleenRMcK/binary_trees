#include "binary_trees.h"
/**
 * binary_tree_leaves - counts leaves in a binary tree
 * @tree: root of tree being checked
 * Return: if NULL return 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf = 0;
	size_t left_help = 0;
	size_t right_help = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		left_help = binary_tree_leaves(tree->left);
		right_help = binary_tree_leaves(tree->right);
		leaf = left_help + right_help;
		return ((!left_help && !right_help) ? leaf + 1 : leaf + 0);
	}
}
