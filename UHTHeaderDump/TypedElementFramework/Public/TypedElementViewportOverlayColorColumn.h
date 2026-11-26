#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
#include "EditorDataStorageColumn.h"
#include "TypedElementViewportOverlayColorColumn.generated.h"

USTRUCT(BlueprintType)
struct FTypedElementViewportOverlayColorColumn : public FEditorDataStorageColumn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor OverlayColor;
    
    TYPEDELEMENTFRAMEWORK_API FTypedElementViewportOverlayColorColumn();
};

