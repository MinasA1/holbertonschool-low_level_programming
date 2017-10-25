#include "binary_trees.h"
/**
 * binary_tree_height - counts the height of binary tree
 * @tree: node to root of binary tree
 * Return: height of tree, 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
  size_t left = 0, right = 0;

  if (tree)
    {
      left += binary_tree_height(tree->left);
      right += binary_tree_height(tree->right);
      if (left > right)
	return(left + 1);
      if (tree->left || tree->right)
	return(right + 1);
    }
  return (0);
}
