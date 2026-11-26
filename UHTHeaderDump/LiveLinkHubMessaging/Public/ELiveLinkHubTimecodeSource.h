#pragma once
#include "CoreMinimal.h"
#include "ELiveLinkHubTimecodeSource.generated.h"

UENUM()
enum class ELiveLinkHubTimecodeSource : int32 {
    NotDefined,
    SystemTimeEditor,
    UseSubjectName,
};

