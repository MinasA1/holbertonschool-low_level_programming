#include "binary_trees.h"
/**
 * binary_tree_size - counts the size of binary tree
 * @tree: node to root of binary tree
 * Return: size of tree, 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 1;

	if (tree)
		{
		size += binary_tree_size(tree->left);
		size += binary_tree_size(tree->right);
		return (size);
		}
	return (0);
}
