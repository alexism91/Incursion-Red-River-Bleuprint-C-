#pragma once
#include "CoreMinimal.h"
#include "ESCCModification.h"
#include "EditorDataStorageColumn.h"
#include "SCCStatusColumn.generated.h"

USTRUCT(BlueprintType)
struct FSCCStatusColumn : public FEditorDataStorageColumn {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ESCCModification Modification;
    
    TYPEDELEMENTFRAMEWORK_API FSCCStatusColumn();
};

