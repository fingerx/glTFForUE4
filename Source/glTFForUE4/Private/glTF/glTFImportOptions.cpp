// Copyright 2017 - 2018 Code 4 Game, Org. All Rights Reserved.

#include "glTFForUE4PrivatePCH.h"
#include "glTF/glTFImportOptions.h"

FglTFImportOptions::FglTFImportOptions()
    : FilePathInOS(TEXT(""))
    , FilePathInEngine(TEXT(""))
    , ImportType(EglTFImportType::StaticMesh)
    , MeshScaleRatio(1.0f)
    , bInvertNormal(false)
    , bUseMikkTSpace(true)
    , bRecomputeNormals(false)
    , bRecomputeTangents(false)
    , bIntegrateAllMeshsForStaticMesh(true)
    , bImportAnimationForSkeletalMesh(false)
    , bImportMaterial(true)
    , bImportTexture(true)
{
    //
}

const FglTFImportOptions FglTFImportOptions::Default;
FglTFImportOptions FglTFImportOptions::Current;
