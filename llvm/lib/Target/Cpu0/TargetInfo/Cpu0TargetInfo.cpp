//
// Created by ye on 2025/5/14.
//
#include "llvm/MC/TargetRegistry.h"
#include "TargetInfo/Cpu0TargetInfo.h"

using namespace llvm;

Target &llvm::getTheCpu0Target() {
  static Target TheCpu0Target;
  return TheCpu0Target;
}

extern "C" LLVM_EXTERNAL_VISIBILITY void LLVMInitializeCpu0TargetInfo(){
  RegisterTarget<Triple::cpu0, /*HasJIT=*/false>
          X(getTheCpu0Target(), "cpu0", "Cpu0 (32-bit big endian)", "Cpu0");
}