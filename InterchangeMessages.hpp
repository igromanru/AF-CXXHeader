#ifndef UE4SS_SDK_InterchangeMessages_HPP
#define UE4SS_SDK_InterchangeMessages_HPP

class UInterchangeResultMeshError : public UInterchangeResultError
{
    FString MeshName;                                                                 // 0x0070 (size: 0x10)

}; // Size: 0x80

class UInterchangeResultMeshError_Generic : public UInterchangeResultMeshError
{
    FText Text;                                                                       // 0x0080 (size: 0x10)

}; // Size: 0x90

class UInterchangeResultMeshWarning : public UInterchangeResultWarning
{
    FString MeshName;                                                                 // 0x0070 (size: 0x10)

}; // Size: 0x80

class UInterchangeResultMeshWarning_Generic : public UInterchangeResultMeshWarning
{
    FText Text;                                                                       // 0x0080 (size: 0x10)

}; // Size: 0x90

class UInterchangeResultMeshWarning_TooManyUVs : public UInterchangeResultMeshWarning
{
    int32 ExcessUVs;                                                                  // 0x0080 (size: 0x4)

}; // Size: 0x88

class UInterchangeResultTextureWarning : public UInterchangeResultWarning
{
    FString TextureName;                                                              // 0x0070 (size: 0x10)

}; // Size: 0x80

class UInterchangeResultTextureWarning_TextureFileDoNotExist : public UInterchangeResultTextureWarning
{
    FText Text;                                                                       // 0x0080 (size: 0x10)
    FString MaterialName;                                                             // 0x0090 (size: 0x10)

}; // Size: 0xA0

#endif
