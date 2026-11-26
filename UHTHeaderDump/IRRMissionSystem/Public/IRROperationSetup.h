#pragma once
#include "CoreMinimal.h"
#include "IRRMissionSetup.h"
#include "IRROperationSetup.generated.h"

UCLASS(Blueprintable)
class IRRMISSIONSYSTEM_API UIRROperationSetup : public UIRRMissionSetup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAddToJournal;
    
    UIRROperationSetup();

};

