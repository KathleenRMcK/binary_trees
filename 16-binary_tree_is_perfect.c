#include "binary_trees.h"


/**
 * perfect_check - checks if tree is perfect
 * @tree: tree being checked
 * Return: result to project function
 */
int perfect_check(const binary_tree_t *tree)
{
	int left_check = 0;
	int right_check = 0;

	if (tree->left && tree->right)
	{
		left_check = 1 + perfect_check(tree->left);
		right_check = 1 + perfect_check(tree->right);
		if (right_check == left_check && right_check != 0 && left_check != 0)
		{
			return (right_check);
		}
		return (0);
	}
	else if (!tree->left && !tree->right)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}


/**
 * binary_tree_is_perfect - checks if tree is perfect
 * @tree: tree to be checked
 * Return: if NULL return 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int check = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		check = perfect_check(tree);
		if (check != 0)
		{
			return (1);
		}
		return (0);
	}
}
