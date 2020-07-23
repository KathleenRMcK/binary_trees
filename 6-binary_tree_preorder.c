#include "binary_trees.h"
/**
 * binary_tree_preorder - prints binary tree using pre-order traversal
 * @tree: root node of tree
 * @func: call for each node
 * Return: NULL on nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	else
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
