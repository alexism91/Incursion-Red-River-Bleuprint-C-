#include "IRRTerminalDirectoryRequirement.h"

UIRRTerminalDirectoryRequirement::UIRRTerminalDirectoryRequirement() {
}

bool UIRRTerminalDirectoryRequirement::IsVisible_Implementation(const UIRRTerminalComponent* Terminal) {
    return false;
}

bool UIRRTerminalDirectoryRequirement::IsAccessible_Implementation(const UIRRTerminalComponent* Terminal) {
    return false;
}

bool UIRRTerminalDirectoryRequirement::GetAccessCommands_Implementation(const UIRRTerminalComponent* Terminal, TArray<FText>& OutCommands) {
    return false;
}


