/*
 * treesearch.c
 *
 *  Created on: Nov 10, 2017
 *      Author: jenifferwu
 */
#include "tree.h"

TreeNode * Tree_search(TreeNode * tn, int val)
{
	if (tn == NULL)
	{
		// 没有找到
		return NULL;
	}
	if (val == (tn -> value))
	{
		// 找到对应节点
		return tn;
	}
	if (val < (tn -> value))
	{
		// 在左边的节点查找
		return Tree_search(tn -> left, val);
	}
	return Tree_search(tn -> right, val);
}
