#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "DataflowContextObject.generated.h"

class UDataflow;
class UDataflowEdNode;

UCLASS(Blueprintable, MinimalAPI)
class UDataflowContextObject : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UDataflowEdNode* SelectedNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UDataflow* DataflowGraph;
    
public:
    UDataflowContextObject();

};

