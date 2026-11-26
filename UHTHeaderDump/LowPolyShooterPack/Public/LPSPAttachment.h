#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "LPSPOffset.h"
#include "LPSPRepresentation.h"
#include "LPSPAttachment.generated.h"

class UMaterialInterface;
class UStaticMeshComponent;
class UTexture;

UCLASS(Abstract, Blueprintable, NoExport)
class LOWPOLYSHOOTERPACK_API ALPSPAttachment : public ALPSPRepresentation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* Mesh;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlwaysVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UMaterialInterface*> Materials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLPSPOffset Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor TextureTint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* Texture;
    
public:
    ALPSPAttachment(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAlwaysVisible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetTextureTint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture* GetTexture() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLPSPOffset GetOffset() const;
    
};

