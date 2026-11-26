#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "PreviewGeometry.generated.h"

class APreviewGeometryActor;
class ULineSetComponent;
class UMaterialInterface;
class UPointSetComponent;
class UTriangleSetComponent;
class UWorld;

UCLASS(Blueprintable, MinimalAPI, Transient)
class UPreviewGeometry : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APreviewGeometryActor* ParentActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<FString, UTriangleSetComponent*> TriangleSets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<FString, ULineSetComponent*> LineSets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<FString, UPointSetComponent*> PointSets;
    
    UPreviewGeometry();

    UFUNCTION(BlueprintCallable)
    bool SetPointSetVisibility(const FString& PointSetIdentifier, bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    bool SetPointSetMaterial(const FString& PointSetIdentifier, UMaterialInterface* NewMaterial);
    
    UFUNCTION(BlueprintCallable)
    bool SetLineSetVisibility(const FString& LineSetIdentifier, bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    bool SetLineSetMaterial(const FString& LineSetIdentifier, UMaterialInterface* NewMaterial);
    
    UFUNCTION(BlueprintCallable)
    void SetAllPointSetsMaterial(UMaterialInterface* Material);
    
    UFUNCTION(BlueprintCallable)
    void SetAllLineSetsMaterial(UMaterialInterface* Material);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveTriangleSet(const FString& TriangleSetIdentifier, bool bDestroy);
    
    UFUNCTION(BlueprintCallable)
    bool RemovePointSet(const FString& PointSetIdentifier, bool bDestroy);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveLineSet(const FString& LineSetIdentifier, bool bDestroy);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllTriangleSets(bool bDestroy);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllPointSets(bool bDestroy);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllLineSets(bool bDestroy);
    
    UFUNCTION(BlueprintCallable)
    APreviewGeometryActor* GetActor() const;
    
    UFUNCTION(BlueprintCallable)
    UTriangleSetComponent* FindTriangleSet(const FString& TriangleSetIdentifier);
    
    UFUNCTION(BlueprintCallable)
    UPointSetComponent* FindPointSet(const FString& PointSetIdentifier);
    
    UFUNCTION(BlueprintCallable)
    ULineSetComponent* FindLineSet(const FString& LineSetIdentifier);
    
    UFUNCTION(BlueprintCallable)
    void Disconnect();
    
    UFUNCTION(BlueprintCallable)
    void CreateInWorld(UWorld* World, const FTransform& WithTransform);
    
    UFUNCTION(BlueprintCallable)
    UTriangleSetComponent* AddTriangleSet(const FString& TriangleSetIdentifier);
    
    UFUNCTION(BlueprintCallable)
    UPointSetComponent* AddPointSet(const FString& PointSetIdentifier);
    
    UFUNCTION(BlueprintCallable)
    ULineSetComponent* AddLineSet(const FString& LineSetIdentifier);
    
};

