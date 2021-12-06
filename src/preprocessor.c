#include <stdio.h>

/***
 * 预处理器不是编译器的一部分，但是它能指示编译器的工作，另外还是处理文本替换工作，比如替换所有宏
 * 预处理命令由 # 号开头， 预处理命令的大部分操作都围绕着宏，比如定义宏
 * #define PI 3.1415926
 * 根据宏指示编译过程
 * 
 * #ifdef PI
 *  (do something)
 * #else
 *  (do other)
 * 
    指令	     描述
    #define	    定义宏
    #include	包含一个源代码文件
    #undef	    取消已定义的宏
    #ifdef	    如果宏已经定义，则返回真
    #ifndef	    如果宏没有定义，则返回真
    #if	        如果给定条件为真，则编译下面代码
    #else	    #if 的替代方案
    #elif	    如果前面的 #if 给定条件不为真，当前条件为真，则编译下面代码
    #endif	    结束一个 #if……#else 条件编译块
    #error	    当遇到标准错误时，输出错误消息
    #pragma	    使用标准化方法，向编译器发布特殊的命令到编译器中
 * 
 ***/

#define PI 3.1415926

// 预处理器存在一些运算符：

// 必须加括号，不然结果可能不符合预期
#define square(x)  ((x)*(x))

// 宏延续运算符 '\', 当一行过长时，可用宏延续运算符，让其多行效果与一行一致
#define love(a,b) \
printf("%s love %s\n", a, b)

// 字符串常量化运算符 '#'， 当需要将一个参数转化为字符串常量时使用它
#define show_love(a,b) printf(#a" love "#b"\n")


// 标记粘贴运算符 ’##‘，用以在宏定义中将两个独立的标记合并为一个标记
#define print_val(suffix) printf("token"#suffix"=%d\n", token##suffix)





void pre_macro_demo();

int main()
{
    pre_macro_demo();
    love("黄益凛", "陈文辰");
    show_love(黄益凛, 陈文辰); // 替换为printf("黄益凛 love 陈文辰\n")；

    int token88 = 88;
    print_val(88); // 替换为 printf("token88=%d\n", token88)

    
}


/**

ANSI C 定义了许多宏。在编程中您可以使用这些宏，但是不能直接修改这些预定义的宏。

宏	         描述
__DATE__	当前日期，一个以 "MMM DD YYYY" 格式表示的字符常量。
__TIME__	当前时间，一个以 "HH:MM:SS" 格式表示的字符常量。
__FILE__	这会包含当前文件名，一个字符串常量。
__LINE__	这会包含当前行号，一个十进制常量。
__STDC__	当编译器以 ANSI 标准编译时，则定义为 1。 
 
 * */
void pre_macro_demo() {
    printf("__DATE__: %s\n", __DATE__);
    printf("__TIME__: %s\n", __TIME__);
    printf("__FILE__: %s\n", __FILE__);
    printf("__LINE__: %d\n", __LINE__);
    printf("__STDC__: %d\n", __STDC__);
}