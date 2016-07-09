#递归哈希进行模式串匹配
***
>字符串处理的主要功能是搜索查找功能

>当下流行编成语言都提供了相应的字符串查询好功能：

> (1) C： strchr, strstr

> (2) C++: find, rfind, find_first_of, find_first_not_of 等

> (3) Java: indexOf, lastIndexOf等

***
>以下提供一种使用递归哈希进行字符串搜索和查找的方法：

>>##(1) 递归哈希
>>>维护一个大小为n的窗口。使用下列公式结算一个起始位置为x,长度为n的窗口的哈希数值。
>>>***
>>><img src="http://chart.googleapis.com/chart?cht=tx&chl=\Large h_x=(s_xB^n-1+s_x-1B^n-2+ ...+s_x+n-2B^1+s_x+n-1B^0)modP" style="border:none;">
>>>***
>>>递归哈希主要体现在哈希数值的更新操作，减少重复计算。下面哈希值更新公式。
>>>***
>>><img src="http://www.forkosh.com/mathtex.cgi?  \Large h_x+1 = [(h_x +P- (s_xB^n-1) mod P) mod P *B + s_(x+1)+(n-1)B^0] mod P">
>>>***
>>>窗口[x,x+n)与[x+1,x+n+1)有n个元素是相同的,在上面更新公式中我们可以看到，更新就是把首元素的哈希值去掉，然后添加一个新的窗口元素。
>>***

>> ##(2) 使用递归哈希进行字符串匹配
>>> 设模式串为pattern，文本为text，设定窗口大小Plen与模式串的长度相同。每次保持文本中Plen长度字符串的哈希值，当哈希值与模式串的哈希值相等时，进行字符串的具体校验。如果校验相等，存在匹配值。
    
    

    
    
