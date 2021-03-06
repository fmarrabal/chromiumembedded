// Copyright (c) 2012 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.

#ifndef CEF_TESTS_CEFCLIENT_PERFORMANCE_TEST_H_
#define CEF_TESTS_CEFCLIENT_PERFORMANCE_TEST_H_
#pragma once

#include "cefclient/client_app.h"

namespace performance_test {

// Render delegate creation. Called from client_app_delegates.cpp.
void CreateRenderDelegates(ClientApp::RenderDelegateSet& delegates);

}  // namespace performance_test

#endif  // CEF_TESTS_CEFCLIENT_PERFORMANCE_TEST_H_
