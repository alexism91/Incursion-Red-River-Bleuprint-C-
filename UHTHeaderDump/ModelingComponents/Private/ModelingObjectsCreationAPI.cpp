#include "ModelingObjectsCreationAPI.h"

UModelingObjectsCreationAPI::UModelingObjectsCreationAPI() {
}

FCreateTextureObjectResult UModelingObjectsCreationAPI::CreateTextureObject(const FCreateTextureObjectParams& CreateTexParams) {
    return FCreateTextureObjectResult{};
}

FCreateComponentResult UModelingObjectsCreationAPI::CreateNewComponentOnActor(const FCreateComponentParams& CreateComponentParams) {
    return FCreateComponentResult{};
}

FCreateActorResult UModelingObjectsCreationAPI::CreateNewActor(const FCreateActorParams& CreateActorParams) {
    return FCreateActorResult{};
}

FCreateMeshObjectResult UModelingObjectsCreationAPI::CreateMeshObject(const FCreateMeshObjectParams& CreateMeshParams) {
    return FCreateMeshObjectResult{};
}

FCreateMaterialObjectResult UModelingObjectsCreationAPI::CreateMaterialObject(const FCreateMaterialObjectParams& CreateMaterialParams) {
    return FCreateMaterialObjectResult{};
}


