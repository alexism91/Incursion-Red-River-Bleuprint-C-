#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EngineSubsystem -FallbackName=EngineSubsystem
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=ESlatePostRT -FallbackName=ESlatePostRT
#include "SlateFXSubsystem.generated.h"

class USlateRHIPostBufferProcessor;

UCLASS(Blueprintable, MinimalAPI)
class USlateFXSubsystem : public UEngineSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<ESlatePostRT, USlateRHIPostBufferProcessor*> SlatePostBufferProcessors;
    
public:
    USlateFXSubsystem();

    UFUNCTION(BlueprintCallable)
    USlateRHIPostBufferProcessor* GetSlatePostProcessor(ESlatePostRT InPostBufferBit);
    
};

