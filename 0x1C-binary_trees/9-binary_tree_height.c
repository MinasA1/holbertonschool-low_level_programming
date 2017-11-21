#include "binary_trees.h"
/**
 * binary_tree_height - counts the height of binary tree
 * @tree: node to root of binary tree
 * Return: height of tree, 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 1, right = 1;

	if (tree)
		{
		left += binary_tree_height(tree->left);
		right += binary_tree_height(tree->right);
		if (left > right)
			return (left);
		if (tree->left || tree->right)
			return (right);
		}
	return (0);
}
