/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7dea747 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Xilinx/Projects/Caches/test_unified_cache.v";
static int ng1[] = {0, 0};
static int ng2[] = {2, 0};
static int ng3[] = {1, 0};
static int ng4[] = {2123000123, 0};
static int ng5[] = {10, 0};
static const char *ng6 = "ERROR! Result = %d, should be %d";
static int ng7[] = {1000, 0};
static int ng8[] = {1212121, 0};
static int ng9[] = {1002003009, 0};
static int ng10[] = {1024, 0};
static int ng11[] = {998, 0};
static int ng12[] = {5, 0};
static const char *ng13 = "<<< OK >>> All tests passed!";
static const char *ng14 = "<<< ERROR >>> Failed testing!";



static void Initial_62_0(char *t0)
{
    char t11[8];
    char *t1;
    char *t2;
    char *t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    int t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;

LAB0:    t1 = (t0 + 3968U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(62, ng0);

LAB4:    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 6700);
    *((int *)t8) = t7;

LAB5:    t9 = (t0 + 6700);
    if (*((int *)t9) > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(67, ng0);

LAB15:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 3776);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB16;

LAB1:    return;
LAB6:    xsi_set_current_line(65, ng0);
    t10 = (t0 + 3776);
    xsi_process_wait(t10, 10000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(65, ng0);
    t12 = (t0 + 1928);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memset(t11, 0, 8);
    t15 = (t14 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t14);
    t19 = (t18 & t17);
    t20 = (t19 & 1U);
    if (t20 != 0)
        goto LAB12;

LAB10:    if (*((unsigned int *)t15) == 0)
        goto LAB9;

LAB11:    t21 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t21) = 1;

LAB12:    t22 = (t11 + 4);
    t23 = (t14 + 4);
    t24 = *((unsigned int *)t14);
    t25 = (~(t24));
    *((unsigned int *)t11) = t25;
    *((unsigned int *)t22) = 0;
    if (*((unsigned int *)t23) != 0)
        goto LAB14;

LAB13:    t30 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t30 & 1U);
    t31 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t31 & 1U);
    t32 = (t0 + 1928);
    xsi_vlogvar_assign_value(t32, t11, 0, 0, 1);
    t2 = (t0 + 6700);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB5;

LAB9:    *((unsigned int *)t11) = 1;
    goto LAB12;

LAB14:    t26 = *((unsigned int *)t11);
    t27 = *((unsigned int *)t23);
    *((unsigned int *)t11) = (t26 | t27);
    t28 = *((unsigned int *)t22);
    t29 = *((unsigned int *)t23);
    *((unsigned int *)t22) = (t28 | t29);
    goto LAB13;

LAB16:    xsi_set_current_line(67, ng0);
    t3 = (t0 + 1928);
    t8 = (t3 + 56U);
    t9 = *((char **)t8);
    memset(t11, 0, 8);
    t10 = (t9 + 4);
    t4 = *((unsigned int *)t10);
    t5 = (~(t4));
    t6 = *((unsigned int *)t9);
    t16 = (t6 & t5);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB20;

LAB18:    if (*((unsigned int *)t10) == 0)
        goto LAB17;

LAB19:    t12 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t12) = 1;

LAB20:    t13 = (t11 + 4);
    t14 = (t9 + 4);
    t18 = *((unsigned int *)t9);
    t19 = (~(t18));
    *((unsigned int *)t11) = t19;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB22;

LAB21:    t27 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t27 & 1U);
    t28 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t28 & 1U);
    t15 = (t0 + 1928);
    xsi_vlogvar_assign_value(t15, t11, 0, 0, 1);
    goto LAB15;

LAB17:    *((unsigned int *)t11) = 1;
    goto LAB20;

LAB22:    t20 = *((unsigned int *)t11);
    t24 = *((unsigned int *)t14);
    *((unsigned int *)t11) = (t20 | t24);
    t25 = *((unsigned int *)t13);
    t26 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t25 | t26);
    goto LAB21;

LAB23:    goto LAB1;

}

static void Initial_70_1(char *t0)
{
    char t12[8];
    char *t1;
    char *t2;
    char *t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    int t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;

LAB0:    t1 = (t0 + 4216U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(70, ng0);

LAB4:    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 12);
    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 4024);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 12);
    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 6704);
    *((int *)t8) = t7;

LAB6:    t9 = (t0 + 6704);
    if (*((int *)t9) > 0)
        goto LAB7;

LAB8:    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 6708);
    *((int *)t8) = t7;

LAB10:    t9 = (t0 + 6708);
    if (*((int *)t9) > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 6712);
    *((int *)t8) = t7;

LAB14:    t9 = (t0 + 6712);
    if (*((int *)t9) > 0)
        goto LAB15;

LAB16:    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(95, ng0);
    t2 = (t0 + 4024);
    xsi_process_wait(t2, 40000LL);
    *((char **)t1) = &&LAB18;
    goto LAB1;

LAB7:    xsi_set_current_line(89, ng0);
    t10 = (t0 + 4536);
    *((int *)t10) = 1;
    t11 = (t0 + 4248);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    t2 = (t0 + 6704);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB6;

LAB11:    xsi_set_current_line(91, ng0);
    t10 = (t0 + 4552);
    *((int *)t10) = 1;
    t11 = (t0 + 4248);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB13:    t2 = (t0 + 6708);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB10;

LAB15:    xsi_set_current_line(93, ng0);
    t10 = (t0 + 4568);
    *((int *)t10) = 1;
    t11 = (t0 + 4248);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB17;
    goto LAB1;

LAB17:    t2 = (t0 + 6712);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB14;

LAB18:    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 6716);
    *((int *)t8) = t7;

LAB19:    t9 = (t0 + 6716);
    if (*((int *)t9) > 0)
        goto LAB20;

LAB21:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t12, 0, 8);
    t8 = (t3 + 4);
    t9 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = *((unsigned int *)t2);
    t6 = (t4 ^ t5);
    t13 = *((unsigned int *)t8);
    t14 = *((unsigned int *)t9);
    t15 = (t13 ^ t14);
    t16 = (t6 | t15);
    t17 = *((unsigned int *)t8);
    t18 = *((unsigned int *)t9);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB24;

LAB23:    if (t19 != 0)
        goto LAB25;

LAB26:    t11 = (t12 + 4);
    t22 = *((unsigned int *)t11);
    t23 = (~(t22));
    t24 = *((unsigned int *)t12);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB27;

LAB28:
LAB29:    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 12);
    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(106, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(107, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 6720);
    *((int *)t8) = t7;

LAB31:    t9 = (t0 + 6720);
    if (*((int *)t9) > 0)
        goto LAB32;

LAB33:    xsi_set_current_line(108, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(110, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 6724);
    *((int *)t8) = t7;

LAB35:    t9 = (t0 + 6724);
    if (*((int *)t9) > 0)
        goto LAB36;

LAB37:    xsi_set_current_line(111, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 6728);
    *((int *)t8) = t7;

LAB39:    t9 = (t0 + 6728);
    if (*((int *)t9) > 0)
        goto LAB40;

LAB41:    xsi_set_current_line(113, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng9)));
    memset(t12, 0, 8);
    t8 = (t3 + 4);
    t9 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = *((unsigned int *)t2);
    t6 = (t4 ^ t5);
    t13 = *((unsigned int *)t8);
    t14 = *((unsigned int *)t9);
    t15 = (t13 ^ t14);
    t16 = (t6 | t15);
    t17 = *((unsigned int *)t8);
    t18 = *((unsigned int *)t9);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB44;

LAB43:    if (t19 != 0)
        goto LAB45;

LAB46:    t11 = (t12 + 4);
    t22 = *((unsigned int *)t11);
    t23 = (~(t22));
    t24 = *((unsigned int *)t12);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB47;

LAB48:
LAB49:    xsi_set_current_line(120, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 12);
    xsi_set_current_line(121, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(122, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(123, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 6732);
    *((int *)t8) = t7;

LAB51:    t9 = (t0 + 6732);
    if (*((int *)t9) > 0)
        goto LAB52;

LAB53:    xsi_set_current_line(124, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t12, 0, 8);
    t8 = (t3 + 4);
    t9 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = *((unsigned int *)t2);
    t6 = (t4 ^ t5);
    t13 = *((unsigned int *)t8);
    t14 = *((unsigned int *)t9);
    t15 = (t13 ^ t14);
    t16 = (t6 | t15);
    t17 = *((unsigned int *)t8);
    t18 = *((unsigned int *)t9);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB56;

LAB55:    if (t19 != 0)
        goto LAB57;

LAB58:    t11 = (t12 + 4);
    t22 = *((unsigned int *)t11);
    t23 = (~(t22));
    t24 = *((unsigned int *)t12);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB59;

LAB60:
LAB61:    xsi_set_current_line(131, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(132, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 12);
    xsi_set_current_line(133, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(134, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(135, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 6736);
    *((int *)t8) = t7;

LAB63:    t9 = (t0 + 6736);
    if (*((int *)t9) > 0)
        goto LAB64;

LAB65:    xsi_set_current_line(136, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(137, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 6740);
    *((int *)t8) = t7;

LAB67:    t9 = (t0 + 6740);
    if (*((int *)t9) > 0)
        goto LAB68;

LAB69:    xsi_set_current_line(138, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(139, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 6744);
    *((int *)t8) = t7;

LAB71:    t9 = (t0 + 6744);
    if (*((int *)t9) > 0)
        goto LAB72;

LAB73:    xsi_set_current_line(140, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(141, ng0);
    t2 = (t0 + 4024);
    xsi_process_wait(t2, 40000LL);
    *((char **)t1) = &&LAB75;
    goto LAB1;

LAB20:    xsi_set_current_line(96, ng0);
    t10 = (t0 + 4584);
    *((int *)t10) = 1;
    t11 = (t0 + 4248);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB22;
    goto LAB1;

LAB22:    t2 = (t0 + 6716);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB19;

LAB24:    *((unsigned int *)t12) = 1;
    goto LAB26;

LAB25:    t10 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB26;

LAB27:    xsi_set_current_line(98, ng0);

LAB30:    xsi_set_current_line(99, ng0);
    t27 = (t0 + 1048U);
    t28 = *((char **)t27);
    t27 = ((char*)((ng4)));
    xsi_vlogfile_write(1, 0, 0, ng6, 3, t0, (char)118, t28, 32, (char)119, t27, 32);
    xsi_set_current_line(100, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB29;

LAB32:    xsi_set_current_line(107, ng0);
    t10 = (t0 + 4600);
    *((int *)t10) = 1;
    t11 = (t0 + 4248);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB34;
    goto LAB1;

LAB34:    t2 = (t0 + 6720);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB31;

LAB36:    xsi_set_current_line(110, ng0);
    t10 = (t0 + 4616);
    *((int *)t10) = 1;
    t11 = (t0 + 4248);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB38;
    goto LAB1;

LAB38:    t2 = (t0 + 6724);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB35;

LAB40:    xsi_set_current_line(112, ng0);
    t10 = (t0 + 4632);
    *((int *)t10) = 1;
    t11 = (t0 + 4248);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB42;
    goto LAB1;

LAB42:    t2 = (t0 + 6728);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB39;

LAB44:    *((unsigned int *)t12) = 1;
    goto LAB46;

LAB45:    t10 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB46;

LAB47:    xsi_set_current_line(114, ng0);

LAB50:    xsi_set_current_line(115, ng0);
    t27 = (t0 + 1048U);
    t28 = *((char **)t27);
    t27 = ((char*)((ng9)));
    xsi_vlogfile_write(1, 0, 0, ng6, 3, t0, (char)118, t28, 32, (char)119, t27, 32);
    xsi_set_current_line(116, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB49;

LAB52:    xsi_set_current_line(123, ng0);
    t10 = (t0 + 4648);
    *((int *)t10) = 1;
    t11 = (t0 + 4248);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB54;
    goto LAB1;

LAB54:    t2 = (t0 + 6732);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB51;

LAB56:    *((unsigned int *)t12) = 1;
    goto LAB58;

LAB57:    t10 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB58;

LAB59:    xsi_set_current_line(125, ng0);

LAB62:    xsi_set_current_line(126, ng0);
    t27 = (t0 + 1048U);
    t28 = *((char **)t27);
    t27 = ((char*)((ng4)));
    xsi_vlogfile_write(1, 0, 0, ng6, 3, t0, (char)118, t28, 32, (char)119, t27, 32);
    xsi_set_current_line(127, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB61;

LAB64:    xsi_set_current_line(135, ng0);
    t10 = (t0 + 4664);
    *((int *)t10) = 1;
    t11 = (t0 + 4248);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB66;
    goto LAB1;

LAB66:    t2 = (t0 + 6736);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB63;

LAB68:    xsi_set_current_line(137, ng0);
    t10 = (t0 + 4680);
    *((int *)t10) = 1;
    t11 = (t0 + 4248);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB70;
    goto LAB1;

LAB70:    t2 = (t0 + 6740);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB67;

LAB72:    xsi_set_current_line(139, ng0);
    t10 = (t0 + 4696);
    *((int *)t10) = 1;
    t11 = (t0 + 4248);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB74;
    goto LAB1;

LAB74:    t2 = (t0 + 6744);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB71;

LAB75:    xsi_set_current_line(142, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 6748);
    *((int *)t8) = t7;

LAB76:    t9 = (t0 + 6748);
    if (*((int *)t9) > 0)
        goto LAB77;

LAB78:    xsi_set_current_line(143, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng11)));
    memset(t12, 0, 8);
    t8 = (t3 + 4);
    t9 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = *((unsigned int *)t2);
    t6 = (t4 ^ t5);
    t13 = *((unsigned int *)t8);
    t14 = *((unsigned int *)t9);
    t15 = (t13 ^ t14);
    t16 = (t6 | t15);
    t17 = *((unsigned int *)t8);
    t18 = *((unsigned int *)t9);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB81;

LAB80:    if (t19 != 0)
        goto LAB82;

LAB83:    t11 = (t12 + 4);
    t22 = *((unsigned int *)t11);
    t23 = (~(t22));
    t24 = *((unsigned int *)t12);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB84;

LAB85:
LAB86:    xsi_set_current_line(150, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 12);
    xsi_set_current_line(151, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(152, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(153, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 6752);
    *((int *)t8) = t7;

LAB88:    t9 = (t0 + 6752);
    if (*((int *)t9) > 0)
        goto LAB89;

LAB90:    xsi_set_current_line(154, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t12, 0, 8);
    t8 = (t3 + 4);
    t9 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = *((unsigned int *)t2);
    t6 = (t4 ^ t5);
    t13 = *((unsigned int *)t8);
    t14 = *((unsigned int *)t9);
    t15 = (t13 ^ t14);
    t16 = (t6 | t15);
    t17 = *((unsigned int *)t8);
    t18 = *((unsigned int *)t9);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB93;

LAB92:    if (t19 != 0)
        goto LAB94;

LAB95:    t11 = (t12 + 4);
    t22 = *((unsigned int *)t11);
    t23 = (~(t22));
    t24 = *((unsigned int *)t12);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB96;

LAB97:
LAB98:    xsi_set_current_line(161, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 6756);
    *((int *)t8) = t7;

LAB100:    t9 = (t0 + 6756);
    if (*((int *)t9) > 0)
        goto LAB101;

LAB102:    xsi_set_current_line(164, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t9 = ((char*)((ng3)));
    memset(t12, 0, 8);
    xsi_vlog_signed_equal(t12, 32, t8, 32, t9, 32);
    t10 = (t12 + 4);
    t4 = *((unsigned int *)t10);
    t5 = (~(t4));
    t6 = *((unsigned int *)t12);
    t13 = (t6 & t5);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB104;

LAB105:    xsi_set_current_line(167, ng0);
    xsi_vlogfile_write(1, 0, 0, ng14, 1, t0);

LAB106:    xsi_set_current_line(169, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

LAB77:    xsi_set_current_line(142, ng0);
    t10 = (t0 + 4712);
    *((int *)t10) = 1;
    t11 = (t0 + 4248);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB79;
    goto LAB1;

LAB79:    t2 = (t0 + 6748);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB76;

LAB81:    *((unsigned int *)t12) = 1;
    goto LAB83;

LAB82:    t10 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB83;

LAB84:    xsi_set_current_line(144, ng0);

LAB87:    xsi_set_current_line(145, ng0);
    t27 = (t0 + 1048U);
    t28 = *((char **)t27);
    t27 = ((char*)((ng11)));
    xsi_vlogfile_write(1, 0, 0, ng6, 3, t0, (char)118, t28, 32, (char)119, t27, 32);
    xsi_set_current_line(146, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB86;

LAB89:    xsi_set_current_line(153, ng0);
    t10 = (t0 + 4728);
    *((int *)t10) = 1;
    t11 = (t0 + 4248);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB91;
    goto LAB1;

LAB91:    t2 = (t0 + 6752);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB88;

LAB93:    *((unsigned int *)t12) = 1;
    goto LAB95;

LAB94:    t10 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB95;

LAB96:    xsi_set_current_line(155, ng0);

LAB99:    xsi_set_current_line(156, ng0);
    t27 = (t0 + 1368U);
    t28 = *((char **)t27);
    t27 = ((char*)((ng3)));
    xsi_vlogfile_write(1, 0, 0, ng6, 3, t0, (char)118, t28, 1, (char)119, t27, 32);
    xsi_set_current_line(157, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB98;

LAB101:    xsi_set_current_line(161, ng0);
    t10 = (t0 + 4744);
    *((int *)t10) = 1;
    t11 = (t0 + 4248);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB103;
    goto LAB1;

LAB103:    t2 = (t0 + 6756);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB100;

LAB104:    xsi_set_current_line(165, ng0);
    xsi_vlogfile_write(1, 0, 0, ng13, 1, t0);
    goto LAB106;

}


extern void work_m_00000000000633519141_2579133213_init()
{
	static char *pe[] = {(void *)Initial_62_0,(void *)Initial_70_1};
	xsi_register_didat("work_m_00000000000633519141_2579133213", "isim/test_unified_cache_isim_beh.exe.sim/work/m_00000000000633519141_2579133213.didat");
	xsi_register_executes(pe);
}
