# count_upper

給一行英文字串, 計算字串中後面有小寫字元的大寫字元的個數. 例如, "For Example " --> 2 

$ gcc count_upper.c
$ ./a.out
For Example.
2                             <------- ctrl-D pressed
$ ./a.out
This is a Good Example. Ok.   <------- ctrl-D pressed
4
$ ./a.out
HHHHHHaHAaH                   <------- ctrl-D pressed
2
