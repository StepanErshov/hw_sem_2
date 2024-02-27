#include <stdio.h>

int main()
{
   int c; //переменная для хранения символов, прочитанных из файла или с клавиатуры

   //читаем символы из файла или с клавиатуры до достижения символа EOF
   while ((c = getchar()) != EOF) 
   {
      //обрабатываем специальные символы
      if (c == ' ')
         printf("<sp>");
      else if (c == '\n')
         printf("\\n");
      else if (c == '\t')
         printf("\\t");
      else
         printf("%c (%d)", c, c); //выводим символ и его десятичное значение
   }

   return 0;
}
/*
Данная программа будет читать символы из файла или с клавиатуры и выводить каждый символ на экран вместе с его десятичным значением. 
Если символ является пробелом, то вместо него выводится строка " <sp> ". Если символ является символом новой строки, то вместо него выводится строка "\n". 
Если символ является символом табуляции, то вместо него выводится строка "\t".
*/