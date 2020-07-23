#include "binary_trees.h"
/**
 * binary_tree_postorder - prints binary tree using post-order traversal
 * @tree: root node of tree
 * @func: call for each node
 * Return: if NULL do nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	else
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
	}
	func(tree->n);
}
