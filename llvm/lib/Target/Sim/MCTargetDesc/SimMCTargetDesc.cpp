//===-- SimMCTargetDesc.cpp - Sim Target Descriptions ----------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//
///
/// This file provides Sim specific target descriptions.
///
//===----------------------------------------------------------------------===//


#include "SimMCTargetDesc.h"
#include "llvm/Support/Compiler.h"

extern "C" LLVM_EXTERNAL_VISIBILITY void LLVMInitializeSimTargetMC() {}
