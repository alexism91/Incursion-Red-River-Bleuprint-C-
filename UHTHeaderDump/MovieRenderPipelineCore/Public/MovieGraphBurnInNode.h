#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftClassPath -FallbackName=SoftClassPath
#include "MovieGraphWidgetRendererBaseNode.h"
#include "MovieGraphBurnInNode.generated.h"

class UMovieGraphBurnInWidget;

UCLASS(Blueprintable)
class MOVIERENDERPIPELINECORE_API UMovieGraphBurnInNode : public UMovieGraphWidgetRendererBaseNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_BurnInClass: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftClassPath BurnInClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<UClass*, UMovieGraphBurnInWidget*> BurnInWidgetInstances;
    
public:
    UMovieGraphBurnInNode();

};

