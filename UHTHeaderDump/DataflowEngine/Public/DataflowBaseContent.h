#pragma once
#include "CoreMinimal.h"
#include "DataflowContextObject.h"
#include "DataflowBaseContent.generated.h"

class UObject;

UCLASS(Blueprintable, MinimalAPI)
class UDataflowBaseContent : public UDataflowContextObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FString DataflowTerminal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UObject* TerminalAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsConstructionDirty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSimulationDirty;
    
public:
    UDataflowBaseContent();

};

