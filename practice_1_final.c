#include <inttypes.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/* 练习1:自动贩卖机
题目要求：模拟自动贩卖机的功能，只卖一种饮料，每瓶五块钱。
        机器只接收1，2，5块钱的硬币，如果钱不够就一直投币直到钱够，出饮料，
        如果钱多了，找零。*/

    const uint32_t PRICE = 5;   //饮料的价格是5块钱
    uint32_t balance = 0;   //用户已经投入的总金额
    uint32_t coin_check;    //用户投入的币种

    /* 主程序 1.提示语
     * 2.用户投币
     * 3.判断投入的币种是否合法，不合法的话直接显示我们不接受xx面值的硬币
*        合法的话
*      i. 判断是否到达商品金额，没到达的话，显示用户已经投入的金额
*      ii.到达的话
*          a.如果需要找零，显示找零金额，并显示谢谢惠顾
*          b.不需要找零的话，直接显示谢谢惠顾
     */

//nice! i have fixed this programme,pretty good!


    void main() {
        puts("welcome to the auto-sell machine! please put into the coins(only $1,$2 or $5)");

        while (balance < PRICE) {
            scanf("%"PRIu32, &coin_check);
            if (coin_check == 1 || coin_check == 2 || coin_check == 5) {
                balance += coin_check;
                printf("you have put into $%"PRIu32"\n",balance);
            }
            else puts("sorry! we only accept $1,$2 or $5 coins!");
        }
        if (balance > PRICE) {
            printf("please take your coins refund $%"PRIu32",thanks for your coming:)\n",balance-PRICE);
        }
        else if (balance == PRICE) {
            puts("thanks for your coming:)\n");
        }
        }