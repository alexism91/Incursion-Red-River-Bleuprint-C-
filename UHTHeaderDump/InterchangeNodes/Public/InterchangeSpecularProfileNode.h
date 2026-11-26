#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InterchangeCore -ObjectName=InterchangeBaseNode -FallbackName=InterchangeBaseNode
#include "InterchangeSpecularProfileNode.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UInterchangeSpecularProfileNode : public UInterchangeBaseNode {
    GENERATED_BODY()
public:
    UInterchangeSpecularProfileNode();

    UFUNCTION(BlueprintCallable)
    bool SetCustomTexture(const FString& TextureUid);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomFormat(uint8 Format);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomTexture(FString& TextureUid) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomFormat(uint8& Format) const;
    
};

