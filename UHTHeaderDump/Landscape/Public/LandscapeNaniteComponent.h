#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "LandscapeNaniteComponent.generated.h"

class ULandscapeComponent;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI, ClassGroup=Custom, Within=LandscapeProxy, meta=(BlueprintSpawnableComponent))
class ULandscapeNaniteComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ProxyContentId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<ULandscapeComponent*> SourceLandscapeComponents;
    
public:
    ULandscapeNaniteComponent(const FObjectInitializer& ObjectInitializer);

};

