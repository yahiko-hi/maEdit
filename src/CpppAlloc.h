﻿#ifndef IG_CPPPALLOC
#define IG_CPPPALLOC

char*** CpppAlloc(int, int, int);
static short int CpppAlloc0(int);
static short int CpppAlloc1(int, int);
static short int CpppAlloc2(int, int, int);

char*** CpppAllocAddPp(int, int, int);
char*** CpppAllocDelPp(int, int);
void CpppAllocExit(void);

#endif

