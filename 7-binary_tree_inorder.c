#include "binary_trees.h"
/**
 * binary_tree_inorder - prints a binary tree using in-order traversal
 * @tree: root node of tree
 * @func: call for each node
 * Return: if NULL do nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	else
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
