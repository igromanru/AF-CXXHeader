#ifndef UE4SS_SDK_CleanableDecal_RuntimeSplatter_BP_HPP
#define UE4SS_SDK_CleanableDecal_RuntimeSplatter_BP_HPP

class ACleanableDecal_RuntimeSplatter_BP_C : public ACleanableDecal_Blood_BP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    TEnumAsByte<EBloodSplatterType::Type> BloodSplatterType;                          // 0x02C8 (size: 0x1)

    class UMaterialInterface* GetDecalMaterial();
    void UpdateBloodSplatter();
    void Server_RemoveDecal();
    void ReceiveBeginPlay();
    void ToggleBloodSplatter(bool NewValue);
    void ExecuteUbergraph_CleanableDecal_RuntimeSplatter_BP(int32 EntryPoint);
}; // Size: 0x2C9

#endif
