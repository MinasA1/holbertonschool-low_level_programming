#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the leaves of binary tree
 * @tree: pointer to binary tree node
 * Return: count of leaves of binary tree, 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
  size_t leaves = 0;

  if (tree)
    {
      leaves += binary_tree_leaves(tree->left);
      leaves += binary_tree_leaves(tree->right);
      if (!tree->left && !tree->right)
	return (leaves + 1);
      else
	return (leaves);
    }
  return (0);
}
