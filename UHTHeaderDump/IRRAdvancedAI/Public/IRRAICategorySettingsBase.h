#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=IRRConfig -ObjectName=IRRConfigDocumentBase -FallbackName=IRRConfigDocumentBase
#include "IRRAICategorySettingsBase.generated.h"

USTRUCT(BlueprintType)
struct IRRADVANCEDAI_API FIRRAICategorySettingsBase : public FIRRConfigDocumentBase {
    GENERATED_BODY()
public:
    FIRRAICategorySettingsBase();
};

