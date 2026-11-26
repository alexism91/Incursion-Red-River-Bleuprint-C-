#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "InventoryInterface.h"
#include "PickUpInterface.h"
#include "PickUpActor.generated.h"

class UInventoryComponent;
class UPickUpComponent;

UCLASS(Blueprintable, NoExport)
class TEST_C_API APickUpActor : public AActor, public IPickUpInterface, public IInventoryInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHandleAttachmentLocally;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInventoryComponent* InventoryComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPickUpComponent* PickUpComponent;
    
    APickUpActor(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

