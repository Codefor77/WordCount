#include <iostream>
#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{
    int i = 0 ,j = 0;
    char c;
    FILE* file;
    errno_t err; 
    err = fopen_s(&file, argv[2] , "r");  
        if (err != 0)
        {
            printf("文件打开失败！\n");
            return 0;
        }
        else
        {
        if (strcmp(argv[1], "-c") == 0)     //字符数
        {
        
            while ((c = fgetc(file)) != EOF)
            {
                i++;
            }
         printf("字符数为:%d\n", i);
        }

        if (strcmp(argv[1], "-w") == 0)     //字符数
        {
            while ((c = fgetc(file)) != EOF)
            {
                if (c == ' ' || c == ',')
                {
                    j++;
                }
            }
        printf("单词数为:%d\n", j+1);
        }
        }
        fclose(file);
    return 0;
}