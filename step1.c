/**********************************************************
 * Copyright (C) 2017 All rights reserved.
 * \file step1.c
 * \brief
 * \note	注意事项：
 *
 *\version 1.0
 ** \author Zhecheng.Ma
 ** \date 2017-09-02
 ** \last modified 2017-09-02 23:11:44
**********************************************************/

#include <stdio.h>

int main()
{
	long shorty = 0L;
	long lofty = 0L;
	long feet = 0L;
	long inches = 0L;
	long shorty_to_lofty = 0L;
	long lofty_to_tree = 0L;
	long tree_height = 0L;
	const long inches_per_foot = 12L;
	//获得罗伊的高度
	printf("把崇高的高度放在他/她的头上，整个脚： ");
	scanf("%ld",&feet);
	printf("	....然后是英寸： ");
	scanf("%ld",&inches);
	lofty = feet * inches_per_foot + inches;

	//获得短的高度到他的眼睛
	printf("进入小矮子的高度到他/她的眼睛，整个脚： ");
	scanf("%ld",&feet);
	printf("	...然后是英寸： ");
	scanf("%ld",&inches);
	shorty = feet * inches_per_foot + inches;
	//获得路径上短的到长的距离
	printf("进入小矮子和崇高之间的距离，在整个脚： ");
	scanf("%ld",&feet);
	printf("	....然后是英寸： ");
	scanf("%ld",&inches);
	shorty_to_lofty = feet * inches_per_foot + inches;
	//获得路径上长的到树的距离
	printf("从崇高到树的脚终于进入距离的方法： ");
	scanf("%ld",&feet);
	lofty_to_tree = feet * inches_per_foot;
	tree_height = shorty + (shorty_to_lofty+lofty_to_tree)*(lofty - shorty)/shorty_to_lofty;
	printf("树高 %ld 英寸 而且 %ld 英寸.\n",tree_height/inches_per_foot,tree_height % inches_per_foot);
	return 0;
}
