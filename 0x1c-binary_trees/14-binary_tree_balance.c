#include "binary_trees.h"
/**
 * _height - counts the height of binary tree
 * @tree: node to root of binary tree
 * Return: height of tree, 0 if tree is NULL
 */
int _height(const binary_tree_t *tree)
{
  int left = 1, right = 1;
  
  if (tree)
    {
      left += _height(tree->left);
      right += _height(tree->right);
      if (left > right)
	return(left);
      else
	return(right);
    }
  return (0);
}
/**
 * binary_tree_balance - measure the balance factor of binarty tree
 * @tree: pointer to root of binary tree
 * Return: balance factor of tree, 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
  int left = 0, right = 0;

  if (!tree)
    return (0);
  left = _height(tree->left);
  right = _height(tree->right);
  return (left - right);
}
