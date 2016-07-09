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
>>><img src="http://chart.googleapis.com/chart?cht=tx&chl=h_%7Bx%7D%20%3D%20(s_%7Bx%7DB%5E%7Bn-1%7D%20%2B%20s_%7Bx-1%7DB%5E%7Bn-2%7D%2B%20...%2Bs_%7Bx%2Bn-2%7DB%5E1%2Bs_%7Bx%2Bn-1%7DB%5E0)%20mod%20P" style="border:none;" />
>>>***
>>>递归哈希主要体现在哈希数值的更新操作，减少重复计算。下面哈希值更新公式。
>>>***
>><img src="http://chart.googleapis.com/chart?cht=tx&chl=h_%7Bx%2B1%7D%20%3D%20((%20h_%7Bx%7D%20%2B%20P%20-%20(s_%7Bx%7DB%5E%7Bn-1%7D)%20mod%20P%20)%20mod%20P%20*%20B%20%2B%20s_%7B(%20x%2B1%20)%2B(%20n-1%20)%7DB%5E0%20)%20mod%20P%20" style="border:none;" />
>>>***
>>>窗口[x,x+n)与[x+1,x+n+1)有n个元素是相同的,在上面更新公式中我们可以看到，更新就是把首元素的哈希值去掉，然后添加一个新的窗口元素。
>>***

>> ##(2) 使用递归哈希进行字符串匹配
>>> 设模式串为pattern，文本为text，设定窗口大小Plen与模式串的长度相同。每次保持文本中Plen长度字符串的哈希值，当哈希值与模式串的哈希值相等时，进行字符串的具体校验。如果校验相等，存在匹配值。
    
    

    
    
