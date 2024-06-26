//===-- Implementation header for calloc ------------------------*- C++ -*-===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#include <stddef.h>

#ifndef LLVM_LIBC_SRC_STDLIB_CALLOC_H
#define LLVM_LIBC_SRC_STDLIB_CALLOC_H

namespace LIBC_NAMESPACE {

void *calloc(size_t num, size_t size);

} // namespace LIBC_NAMESPACE

#endif // LLVM_LIBC_SRC_STDLIB_CALLOC_H
