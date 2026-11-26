#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EditorDataStorageColumn.h"
#include "TypedElementPivotOffset.generated.h"

USTRUCT(BlueprintType)
struct FTypedElementPivotOffset : public FEditorDataStorageColumn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Offset;
    
    TYPEDELEMENTFRAMEWORK_API FTypedElementPivotOffset();
};

