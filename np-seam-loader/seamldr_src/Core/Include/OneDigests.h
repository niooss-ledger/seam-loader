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

#ifndef ONEDIGEST_H
#define ONEDIGEST_H

#include "tpm.h"

#define ONE_SHA384_DIGEST { \
    0x8D, 0x2C, 0xE8, 0x7D, 0x86, 0xF5, 0x5F, 0xCF, 0xAB, 0x77, 0x0A, 0x04, \
    0x7B, 0x09, 0x0D, 0xA2, 0x32, 0x70, 0xFA, 0x20, 0x68, 0x32, 0xDF, 0xEA, \
    0x7E, 0x0C, 0x94, 0x6F, 0xFF, 0x45, 0x1F, 0x81, 0x9A, 0xDD, 0x24, 0x23, \
    0x74, 0xBE, 0x55, 0x1B, 0x0D, 0x63, 0x18, 0xED, 0x6C, 0x7D, 0x41, 0xD8}

#define ONE_SHA512_DIGEST { \
    0x7B, 0x54, 0xB6, 0x68, 0x36, 0xC1, 0xFB, 0xDD, 0x13, 0xD2, 0x44, 0x1D, 0x9E, 0x14, 0x34, 0xDC, \
    0x62, 0xCA, 0x67, 0x7F, 0xB6, 0x8F, 0x5F, 0xE6, 0x6A, 0x46, 0x4B, 0xAA, 0xDE, 0xCD, 0xBD, 0x00, \
    0x57, 0x6F, 0x8D, 0x6B, 0x5A, 0xC3, 0xBC, 0xC8, 0x08, 0x44, 0xB7, 0xD5, 0x0B, 0x1C, 0xC6, 0x60, \
    0x34, 0x44, 0xBB, 0xE7, 0xCF, 0xCF, 0x8F, 0xC0, 0xAA, 0x1E, 0xE3, 0xC6, 0x36, 0xD9, 0xE3, 0x39}

#define ONE_SM3_DIGEST    { \
    0x79, 0x9B, 0x71, 0x9A, 0xC0, 0x31, 0xFC, 0x89, 0xC6, 0xD8, 0x92, 0x5A, 0x48, 0x7D, 0xAD, 0x07, \
    0x30, 0x8F, 0x83, 0x7B, 0x7A, 0xB7, 0xBB, 0xC7, 0xCE, 0xBD, 0x3A, 0x41, 0x18, 0xFD, 0x2F, 0x38}

#define ONE_SHA1_DIGEST   { \
    0xBF, 0x8B, 0x45, 0x30, 0xD8, 0xD2, 0x46, 0xDD, 0x74, 0xAC, 0x53, 0xA1, 0x34, 0x71, 0xBB, 0xA1, \
    0x79, 0x41, 0xDF, 0xF7}

#define ONE_SHA256_DIGEST { \
    0x4B, 0xF5, 0x12, 0x2F, 0x34, 0x45, 0x54, 0xC5, 0x3B, 0xDE, 0x2E, 0xBB, 0x8C, 0xD2, 0xB7, 0xE3, \
    0xD1, 0x60, 0x0A, 0xD6, 0x31, 0xC3, 0x85, 0xA5, 0xD7, 0xCC, 0xE2, 0x3C, 0x77, 0x85, 0x45, 0x9A}

extern UINT8 OneSha384Digest[SHA384_DIGEST_SIZE];
extern UINT8 OneSha512Digest[SHA512_DIGEST_SIZE];;
extern UINT8 OneSm3Digest[SM3_256_DIGEST_SIZE];
extern UINT8 OneSha1Digest[SHA1_DIGEST_SIZE];
extern UINT8 OneSha256Digest[SHA256_DIGEST_SIZE];;

#endif
