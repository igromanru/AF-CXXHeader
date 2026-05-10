#ifndef UE4SS_SDK_LocalizedTexture_BP_HPP
#define UE4SS_SDK_LocalizedTexture_BP_HPP

class ULocalizedTexture_BP_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)
    FName MeshTag;                                                                    // 0x00B0 (size: 0x8)
    int32 MaterialIndex;                                                              // 0x00B8 (size: 0x4)
    FName TextureParameterName;                                                       // 0x00BC (size: 0x8)
    class UTexture2D* EN_Texture;                                                     // 0x00C8 (size: 0x8)
    class UTexture2D* DE_Texture;                                                     // 0x00D0 (size: 0x8)
    class UTexture2D* FR_Texture;                                                     // 0x00D8 (size: 0x8)
    class UTexture2D* JPN_Texture;                                                    // 0x00E0 (size: 0x8)
    class UTexture2D* PT_BR_Texture;                                                  // 0x00E8 (size: 0x8)
    class UTexture2D* RU_Texture;                                                     // 0x00F0 (size: 0x8)
    class UTexture2D* ES-MX_Texture;                                                  // 0x00F8 (size: 0x8)
    class UTexture2D* zh-Hans_Texture;                                                // 0x0100 (size: 0x8)
    class UTexture2D* zh_Hant_Texture;                                                // 0x0108 (size: 0x8)

    void ApplyTexture(class UTexture2D* Texture);
    class UTexture2D* GetLocalizedTexture(FString CurrentCulture);
    void ReceiveBeginPlay();
    void LanguageCallback(FString NewValue);
    void ExecuteUbergraph_LocalizedTexture_BP(int32 EntryPoint);
}; // Size: 0x110

#endif
