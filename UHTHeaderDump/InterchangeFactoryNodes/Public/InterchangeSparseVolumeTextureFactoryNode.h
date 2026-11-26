#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InterchangeCommon -ObjectName=EInterchangeSparseVolumeTextureFormat -FallbackName=EInterchangeSparseVolumeTextureFormat
//CROSS-MODULE INCLUDE V2: -ModuleName=InterchangeCore -ObjectName=InterchangeFactoryBaseNode -FallbackName=InterchangeFactoryBaseNode
#include "InterchangeSparseVolumeTextureFactoryNode.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UInterchangeSparseVolumeTextureFactoryNode : public UInterchangeFactoryBaseNode {
    GENERATED_BODY()
public:
    UInterchangeSparseVolumeTextureFactoryNode();

    UFUNCTION(BlueprintCallable)
    bool SetCustomAttributesBFormat(EInterchangeSparseVolumeTextureFormat Format);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomAttributesBChannelZ(const FString& GridNameAndComponentIndex);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomAttributesBChannelY(const FString& GridNameAndComponentIndex);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomAttributesBChannelX(const FString& GridNameAndComponentIndex);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomAttributesBChannelW(const FString& GridNameAndComponentIndex);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomAttributesAFormat(EInterchangeSparseVolumeTextureFormat Format);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomAttributesAChannelZ(const FString& GridNameAndComponentIndex);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomAttributesAChannelY(const FString& GridNameAndComponentIndex);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomAttributesAChannelX(const FString& GridNameAndComponentIndex);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomAttributesAChannelW(const FString& GridNameAndComponentIndex);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomAnimationID(const FString& InAnimationID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomAttributesBFormat(EInterchangeSparseVolumeTextureFormat& Format) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomAttributesBChannelZ(FString& GridNameAndComponentIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomAttributesBChannelY(FString& GridNameAndComponentIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomAttributesBChannelX(FString& GridNameAndComponentIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomAttributesBChannelW(FString& GridNameAndComponentIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomAttributesAFormat(EInterchangeSparseVolumeTextureFormat& Format) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomAttributesAChannelZ(FString& GridNameAndComponentIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomAttributesAChannelY(FString& GridNameAndComponentIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomAttributesAChannelX(FString& GridNameAndComponentIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomAttributesAChannelW(FString& GridNameAndComponentIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomAnimationID(FString& OutAnimationID) const;
    
};

