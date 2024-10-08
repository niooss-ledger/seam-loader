// Copyright (C) 2023 Intel Corporation                                          
//                                                                               
// Permission is hereby granted, free of charge, to any person obtaining a copy  
// of this software and associated documentation files (the "Software"),         
// to deal in the Software without restriction, including without limitation     
// the rights to use, copy, modify, merge, publish, distribute, sublicense,      
// and/or sell copies of the Software, and to permit persons to whom             
// the Software is furnished to do so, subject to the following conditions:      
//                                                                               
// The above copyright notice and this permission notice shall be included       
// in all copies or substantial portions of the Software.                        
//                                                                               
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS       
// OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,   
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL      
// THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES             
// OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,      
// ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE            
// OR OTHER DEALINGS IN THE SOFTWARE.                                            
//                                                                               
// SPDX-License-Identifier: MIT
/**
 * @file elf.h
 * @brief ELF header handling
 */

#ifndef SRC_COMMON_HELPERS_ELF_H_
#define SRC_COMMON_HELPERS_ELF_H_

#include "../../../include/pseamldr_basic_defs.h"
#include "../../../include/pseamldr_basic_types.h"

#define EI_NIDENT       16

typedef enum elf_ident_e
{
    EI_MAG0         = 0, // 0x7F
    EI_MAG1         = 1, // 'E'
    EI_MAG2         = 2, // 'L'
    EI_MAG3         = 3, // 'F'
    EI_CLASS        = 4, // Architecture (32/64)
    EI_DATA         = 5, // Byte Order
    EI_VERSION      = 6, // ELF Version
    EI_OSABI        = 7, // OS Specific
    EI_ABIVERSION   = 8, // OS Specific
    EI_PAD          = 9  // Padding
} elf_ident_t;

#define ELF_MAGIC0    0x7F // e_ident[EI_MAG0]
#define ELF_MAGIC1    'E'  // e_ident[EI_MAG1]
#define ELF_MAGIC2    'L'  // e_ident[EI_MAG2]
#define ELF_MAGIC3    'F'  // e_ident[EI_MAG3]

#define ELF_CLASS64     (2)  // 64-bit Architecture
#define ELF_DATA2LSB    (1)  // Little Endian order
#define EV_CURRENT      (1)  // ELF Current Version

// ELF program header
typedef struct elf64_ehdr_s
{
    uint8_t  e_ident[EI_NIDENT];
    uint16_t e_type;
    uint16_t e_machine;
    uint32_t e_version;
    uint64_t e_entry;
    uint64_t e_phoff;
    uint64_t e_shoff;
    uint32_t e_flags;
    uint16_t e_ehsize;
    uint16_t e_phentsize;
    uint16_t e_phnum;
    uint16_t e_shentsize;
    uint16_t e_shnum;
    uint16_t e_shstrndx;
} elf64_ehdr_t;

// ELF section header
typedef struct elf64_shdr_s
{
    uint32_t sh_name;
    uint32_t sh_type;
    uint64_t sh_flags;
    uint64_t sh_addr;
    uint64_t sh_offset;
    uint64_t sh_size;
    uint32_t sh_link;
    uint32_t sh_info;
    uint64_t sh_addralign;
    uint64_t sh_entsize;
} elf64_shdr_t;

#define SHT_RELA    4

typedef struct elf64_rela_s
{
    uint64_t r_offset;
    uint64_t r_info;
    uint64_t r_addend;
} elf64_rela_t;

#define R_X86_64_RELATIVE 8


bool_t relocate_elf_image(uint64_t image_addr, uint64_t image_size, uint64_t relocation_addr);

#endif /* SRC_COMMON_HELPERS_ELF_H_ */
