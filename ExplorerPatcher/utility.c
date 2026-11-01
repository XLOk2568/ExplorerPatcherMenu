const wchar_t TestToastXML[] =
L"<toast scenario=\"reminder\" "
L"activationType=\"protocol\" launch=\"https://github.com/XLOk2568/ExplorerPatcherMenu\" duration=\"%s\">\r\n"
L"\t<visual>\r\n"
L"\t\t<binding template=\"ToastGeneric\">\r\n"
L"\t\t\t<text><![CDATA[%s]]></text>\r\n"
L"\t\t\t<text placement=\"attribution\"><![CDATA[ExplorerPatcher]]></text>\r\n"
L"\t\t</binding>\r\n"
L"\t</visual>\r\n"
L"\t<audio src=\"ms-winsoundevent:Notification.Default\" loop=\"false\" silent=\"false\"/>\r\n"
L"</toast>\r\n";
