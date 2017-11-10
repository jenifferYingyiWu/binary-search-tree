/*
 * treeinsert.c
 *
 *  Created on: Nov 10, 2017
 *      Author: jenifferwu
 */
#include "tree.h"
#include <stdlib.h>

static TreeNode * TreeNode_construct(int val)
{
	TreeNode * tn;
	tn = malloc(sizeof(TreeNode));
	tn -> left = NULL;
	tn -> right = NULL;
	tn -> value = val;
	return tn;
}

TreeNode * Tree_insert(TreeNode * tn, int val)
{
	if (tn == NULL)
	{
		// 空树，创建一个节点
		return TreeNode_construct(val);
	}
	// 树非空
	if (val == (tn -> value))
	{
		// 不重复插入相同的值
		return tn;
	}
	if (val < (tn -> value))
	{
		tn -> left = Tree_insert(tn -> left, val);
	}
	else
	{
		tn -> right = Tree_insert(tn -> right, val);
	}
	return tn;
}
