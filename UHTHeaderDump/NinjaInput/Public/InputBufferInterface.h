#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "BufferedInputCommand.h"
#include "InputBufferInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UInputBufferInterface : public UInterface {
    GENERATED_BODY()
};

class IInputBufferInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OpenInputBuffer();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsInputBufferOpen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsInputBufferEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CloseInputBuffer(bool bCancelled);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BufferInputCommands(TArray<FBufferedInputCommand>& InputCommandsForAction);
    
};

