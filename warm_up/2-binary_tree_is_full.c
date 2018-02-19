#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if tree is full
 * @tree: pointer to node
 * Return: 1 if full , 0 if not or NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree)
		{
		if (!tree->left && !tree->right)
			return (1);
		left = binary_tree_is_full(tree->left);
		right = binary_tree_is_full(tree->right);
		return (left & right);
		}
	return (0);
}
