#pragma once
#include "CoreMinimal.h"
#include "EditorDataStorageColumn.h"
#include "SCCRevisionId.h"
#include "SCCRevisionIdColumn.generated.h"

USTRUCT(BlueprintType)
struct FSCCRevisionIdColumn : public FEditorDataStorageColumn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCCRevisionId RevisionId;
    
    TYPEDELEMENTFRAMEWORK_API FSCCRevisionIdColumn();
};

