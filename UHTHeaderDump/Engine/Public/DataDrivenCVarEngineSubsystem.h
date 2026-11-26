#pragma once
#include "CoreMinimal.h"
#include "EngineSubsystem.h"
#include "DataDrivenCVarEngineSubsystem.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UDataDrivenCVarEngineSubsystem : public UEngineSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDataDrivenCVarChanged, const FString&, CVarName);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDataDrivenCVarChanged OnDataDrivenCVarDelegate;
    
    UDataDrivenCVarEngineSubsystem();

};

