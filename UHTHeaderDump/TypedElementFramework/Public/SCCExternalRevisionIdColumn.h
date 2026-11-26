#pragma once
#include "CoreMinimal.h"
#include "EditorDataStorageColumn.h"
#include "SCCRevisionId.h"
#include "SCCExternalRevisionIdColumn.generated.h"

USTRUCT(BlueprintType)
struct FSCCExternalRevisionIdColumn : public FEditorDataStorageColumn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCCRevisionId RevisionId;
    
    TYPEDELEMENTFRAMEWORK_API FSCCExternalRevisionIdColumn();
};

