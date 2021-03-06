/*
  Copyright 2009-2010, Ifcaro, jimmikaelkael & Polo
  Copyright 2006-2008 Polo
  Licenced under Academic Free License version 3.0
  Review Open-Ps2-Loader README & LICENSE files for further details.
  
  Some parts of the code are taken from HD Project by Polo
*/

#ifndef ASM_H
#define ASM_H

#include <tamtypes.h>
#include <kernel.h>
#include <sifdma.h>

void Hook_LoadExecPS2(const char *filename, int argc, char *argv[]);
u32 Hook_SifSetDma(SifDmaTransfer_t *sdd, s32 len);
int Hook_SifSetReg(u32 register_num, int register_value);
int Hook_ExecPS2(void *entry, void *gp, int num_args, char *args[]);
int Hook_CreateThread(ee_thread_t *thread_param);

#endif /* ASM */
