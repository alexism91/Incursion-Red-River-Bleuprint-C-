#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ESpecularProfileFormat -FallbackName=ESpecularProfileFormat
//CROSS-MODULE INCLUDE V2: -ModuleName=InterchangeCore -ObjectName=InterchangeFactoryBaseNode -FallbackName=InterchangeFactoryBaseNode
#include "InterchangeSpecularProfileFactoryNode.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UInterchangeSpecularProfileFactoryNode : public UInterchangeFactoryBaseNode {
    GENERATED_BODY()
public:
    UInterchangeSpecularProfileFactoryNode();

    UFUNCTION(BlueprintCallable)
    bool SetCustomTexture(const FString& TextureUid);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomFormat(ESpecularProfileFormat Format);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomTexture(FString& TextureUid) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomFormat(ESpecularProfileFormat& Format) const;
    
};

