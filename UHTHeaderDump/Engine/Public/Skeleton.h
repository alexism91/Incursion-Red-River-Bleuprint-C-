#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AnimSlotGroup.h"
#include "BoneNode.h"
#include "Interface_AssetUserData.h"
#include "Interface_PreviewMeshProvider.h"
#include "SmartNameContainer.h"
#include "Templates/SubclassOf.h"
#include "VirtualBone.h"
#include "Skeleton.generated.h"

class UAssetUserData;
class UBlendProfile;
class USkeletalMeshSocket;
class USkeleton;

UCLASS(Blueprintable, MinimalAPI)
class USkeleton : public UObject, public IInterface_AssetUserData, public IInterface_PreviewMeshProvider {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBoneNode> BoneTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid VirtualBoneGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVirtualBone> VirtualBones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<USkeleton>> CompatibleSkeletons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseRetargetModesFromCompatibleSkeleton;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USkeletalMeshSocket*> Sockets;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSmartNameContainer SmartNames;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UBlendProfile*> BlendProfiles;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAnimSlotGroup> SlotGroups;
    
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAssetUserData*> AssetUserData;
    
public:
    USkeleton();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBlendProfile* GetBlendProfile(const FName& InProfileName);
    
    UFUNCTION(BlueprintCallable)
    void AddCompatibleSkeletonSoft(const TSoftObjectPtr<USkeleton>& SourceSkeleton);
    
    UFUNCTION(BlueprintCallable)
    void AddCompatibleSkeleton(const USkeleton* SourceSkeleton);
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    bool HasAssetUserDataOfClass(TSubclassOf<UAssetUserData> InUserDataClass) override PURE_VIRTUAL(HasAssetUserDataOfClass, return false;);
    
    UFUNCTION(BlueprintCallable)
    UAssetUserData* GetAssetUserDataOfClass(TSubclassOf<UAssetUserData> InUserDataClass) override PURE_VIRTUAL(GetAssetUserDataOfClass, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    bool AddAssetUserDataOfClass(TSubclassOf<UAssetUserData> InUserDataClass) override PURE_VIRTUAL(AddAssetUserDataOfClass, return false;);
    
};

