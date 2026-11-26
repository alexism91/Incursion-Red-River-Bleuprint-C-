#pragma once
#include "CoreMinimal.h"
#include "EditorDataStorageColumn.h"
#include "SCCUserInfo.h"
#include "SCCExternallyLockedColumn.generated.h"

USTRUCT(BlueprintType)
struct FSCCExternallyLockedColumn : public FEditorDataStorageColumn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCCUserInfo LockedBy;
    
    TYPEDELEMENTFRAMEWORK_API FSCCExternallyLockedColumn();
};

