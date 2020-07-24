#include "binary_trees.h"
/**
 * binary_tree_depth - measures depth of a node in binary tree
 * @tree: node of tree to measure
 * Return: if NULL return 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
