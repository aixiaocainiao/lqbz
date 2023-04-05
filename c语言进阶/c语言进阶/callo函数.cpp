//calloc
//函数原型：void* calloc(size_t num, size_t size);
//
//1）函数的功能是为num 个大小为size的元素开辟一块空间，并且把空间的每个字节初始化为O
//2）与函数ma1loc的区别只在于calloc会在返回地址之前把申请的空间的每个字节初始化为全0。