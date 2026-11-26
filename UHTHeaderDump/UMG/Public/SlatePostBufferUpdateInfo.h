#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=ESlatePostRT -FallbackName=ESlatePostRT
#include "SlatePostBufferUpdateInfo.generated.h"

class USlatePostBufferProcessorUpdater;

USTRUCT(BlueprintType)
struct FSlatePostBufferUpdateInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlatePostRT BufferToUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USlatePostBufferProcessorUpdater* PostParamUpdater;
    
    UMG_API FSlatePostBufferUpdateInfo();
};

