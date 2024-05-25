//===-- SimTargetInfo.cpp - Sim Target Implementation ----------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#include "TargetInfo/SimTargetInfo.h"
#include "llvm/MC/TargetRegistry.h"

namespace llvm {

Target &getTheSimTarget() {
  static Target TheSimTarget;
  return TheSimTarget;
}

extern "C" LLVM_EXTERNAL_VISIBILITY 
void LLVMInitializeSimTargetInfo() {
  RegisterTarget<Triple::sim> X(getTheSimTarget(), 
                                   /*Name*/ "Sim", 
                                   /*ShortDesc*/ "Sim 64",
                                   /*BackendName*/ "SIM");
}

} // namespace llvm