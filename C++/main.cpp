//打印九九乘法表的循环
#include <iostream>  //c++标准输入输出头文件
using namespace std; //使用此命令可以不用加" std:: "


int main(void)
{
    int i,j ;
    for (i = 1; i < 10; i++)
    {
        for (j = 1; j < i; j++)
        {
            cout << j << "*" << i << "=" << i*j << "\t";
        }
        cout << j << "*" << i << "=" << i*j << endl;
    }
    return 0;
}
