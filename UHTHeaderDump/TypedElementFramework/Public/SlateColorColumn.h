#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateColor -FallbackName=SlateColor
#include "EditorDataStorageColumn.h"
#include "SlateColorColumn.generated.h"

USTRUCT(BlueprintType)
struct FSlateColorColumn : public FEditorDataStorageColumn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor Color;
    
    TYPEDELEMENTFRAMEWORK_API FSlateColorColumn();
};

