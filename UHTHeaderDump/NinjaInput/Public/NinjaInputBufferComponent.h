#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "BufferedInputCommand.h"
#include "EInputBufferMode.h"
#include "InputBufferInterface.h"
#include "NinjaInputBufferComponent.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class NINJAINPUT_API UNinjaInputBufferComponent : public UActorComponent, public IInputBufferInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FBufferedInputCommand> BufferedCommands;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInputBufferMode InputBufferMode;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsingInputBuffer;
    
public:
    UNinjaInputBufferComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UActorComponent* GetInputBufferComponent();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanAddToBuffer() const;
    

    // Fix for true pure virtual functions not being implemented
};

