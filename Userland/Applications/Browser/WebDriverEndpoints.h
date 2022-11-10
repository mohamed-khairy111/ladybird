/*
 * Copyright (c) 2022, Tobias Christiansen <tobyase@serenityos.org>
 * Copyright (c) 2022, Tim Flynn <trflynn89@serenityos.org>
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#pragma once

#include <AK/Forward.h>
#include <AK/Function.h>
#include <LibGfx/Rect.h>
#include <LibWeb/Forward.h>

namespace Messages::WebContentServer {
class WebdriverExecuteScriptResponse;
}

namespace Browser {

class WebDriverEndpoints {
public:
    WebDriverEndpoints() = default;
    ~WebDriverEndpoints() = default;

    Function<Messages::WebContentServer::WebdriverExecuteScriptResponse(String const& body, Vector<String> const& json_arguments, Optional<u64> const& timeout, bool async)> on_execute_script;
};

}
