/*
 * treedelete.c
 *
 *  Created on: Nov 10, 2017
 *      Author: jenifferwu
 */
#include "tree.h"
#include <stdlib.h>

TreeNode * Tree_delete(TreeNode * tn, int val)
{
	if (tn == NULL)
	{
		return NULL;
	}
	if (val < (tn -> value))
	{
		tn -> left = Tree_delete(tn -> left, val);
		return tn;
	}
	// v与tn -> value的值相同
	if (((tn -> left) == NULL) && ((tn -> right) == NULL))
	{
		// tn没有子节点
		free(tn);
		return NULL;
	}
	if ((tn -> left) == NULL)
	{
		// tn -> right一定不为NULL
		TreeNode * rc = tn -> right;
		free(tn);
		return rc;
	}
	if ((tn -> right) == NULL)
	{
		// tn -> left一定不为NULL
		TreeNode * lc = tn -> left;
		free(tn);
		return lc;
	}

	// tn有两个子节点
	// 寻找继承节点
	TreeNode * su = tn -> right;    // su must not be NULL
	while ((su -> left) != NULL)
	{
		su = su -> left;
	}

	// su就是tn的继承节点
	// 交换它们的节点值
	tn -> value = su -> value;
	su -> value = val;
}
