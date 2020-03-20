
#include "SampleHandler.h"

#include <string>
#include <windows.h>

#include "include/cef_browser.h"
#include "include/wrapper/cef_helpers.h"

void SampleHandler::OnTitleChange(CefRefPtr<CefBrowser> browser,
    const CefString& title) {
    CEF_REQUIRE_UI_THREAD();

    CefWindowHandle hwnd = browser->GetHost()->GetWindowHandle();
    SetWindowText(hwnd, std::wstring(title).c_str());
}
