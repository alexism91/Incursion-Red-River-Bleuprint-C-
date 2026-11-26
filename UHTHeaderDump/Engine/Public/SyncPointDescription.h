#pragma once
#include "CoreMinimal.h"
#include "ESyncPointActivationRules.h"
#include "ESyncPointEventType.h"
#include "ETickingGroup.h"
#include "SyncPointDescription.generated.h"

USTRUCT(BlueprintType)
struct FSyncPointDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RegisteredName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESyncPointEventType EventType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESyncPointActivationRules ActivationRules;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETickingGroup> FirstPossibleTickGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETickingGroup> LastPossibleTickGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> PrerequisiteSyncGroups;
    
    ENGINE_API FSyncPointDescription();
};

